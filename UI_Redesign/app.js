/* Azureal chapter-select redesign — page behaviour.
   Deliberately small: this page is mostly static content, and the
   design system's motion budget for static content is a hover lift,
   the pulse dot, and the segmented slide. Nothing else earns a frame. */

/* Scroll edge under the sticky nav — the hairline appears only once
   content actually scrolls beneath it, rather than sitting there
   permanently. */
const nav = document.querySelector('.nav');
addEventListener('scroll', () => nav.classList.toggle('scrolled', scrollY > 8), { passive: true });

/* Segmented controls. Each .seg drives the switcher named by its
   data-target; the pressed button's data-show picks the visible pane. */
document.querySelectorAll('.seg').forEach(seg => {
  const target = document.querySelector(seg.dataset.target);

  seg.addEventListener('click', e => {
    const btn = e.target.closest('button');
    if (!btn) return;

    seg.querySelectorAll('button').forEach(b => b.classList.remove('active'));
    btn.classList.add('active');

    if (target) {
      target.querySelectorAll('[data-pane]').forEach(p => {
        p.hidden = p.dataset.pane !== btn.dataset.show;
      });
    }
    fitStages();
  });
});

/* The mockups are authored at 1900 x 2175 — the widget's real Draw
   Size — so every number in the CSS is a number you can type into UMG.
   Showing them on a page means scaling, and that has to be a transform:
   shrinking the type sizes instead would throw away the whole point of
   checking legibility at true proportions.

   The scaled element still occupies its unscaled box, so each one is
   wrapped in .fit and the wrapper is told the real rendered height. */
function fitStages() {
  document.querySelectorAll('.stage').forEach(stage => {
    const style = document.defaultView.getComputedStyle(stage);
    const pad = parseFloat(style.paddingLeft) + parseFloat(style.paddingRight);
    const avail = stage.clientWidth - pad;

    stage.querySelectorAll('.fit').forEach(fit => {
      const widget = fit.firstElementChild;
      if (!widget) return;

      const w = widget.offsetWidth;
      const h = widget.offsetHeight;
      if (!w || !h) return;

      const scale = Math.min(1, avail / w);
      widget.style.transform = `scale(${scale})`;
      fit.style.width = `${w * scale}px`;
      fit.style.height = `${h * scale}px`;
    });
  });
}

addEventListener('load', fitStages);
addEventListener('resize', fitStages);
document.fonts?.ready.then(fitStages);
