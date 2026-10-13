package gh;

import android.animation.ObjectAnimator;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class h extends s {
    public static final int[] k = {0, 1350, 2700, 4050};

    /* renamed from: l, reason: collision with root package name */
    public static final int[] f9265l = {667, 2017, 3367, 4717};

    /* renamed from: m, reason: collision with root package name */
    public static final int[] f9266m = {1000, 2350, 3700, 5050};

    /* renamed from: n, reason: collision with root package name */
    public static final g f9267n = new g(Float.class, "animationFraction", 0);

    /* renamed from: o, reason: collision with root package name */
    public static final g f9268o = new g(Float.class, "completeEndFraction", 1);

    /* renamed from: c, reason: collision with root package name */
    public ObjectAnimator f9269c;

    /* renamed from: d, reason: collision with root package name */
    public ObjectAnimator f9270d;

    /* renamed from: f, reason: collision with root package name */
    public final k f9272f;

    /* renamed from: h, reason: collision with root package name */
    public float f9274h;

    /* renamed from: i, reason: collision with root package name */
    public float f9275i;

    /* renamed from: g, reason: collision with root package name */
    public int f9273g = 0;
    public c j = null;

    /* renamed from: e, reason: collision with root package name */
    public final q2.a f9271e = new q2.a(1);

    public h(k kVar) {
        this.f9272f = kVar;
    }

    @Override // gh.s
    public final void c() {
        ObjectAnimator objectAnimator = this.f9269c;
        if (objectAnimator != null) {
            objectAnimator.cancel();
        }
    }

    @Override // gh.s
    public final void i() {
        q();
        ObjectAnimator objectAnimator = this.f9269c;
        k kVar = this.f9272f;
        objectAnimator.setDuration((long) (kVar.f9298n * 5400.0f));
        this.f9270d.setDuration((long) (kVar.f9298n * 333.0f));
        this.f9273g = 0;
        ((p) ((ArrayList) this.f9324b).get(0)).f9313c = kVar.f9291e[0];
        this.f9275i = 0.0f;
    }

    @Override // gh.s
    public final void l(c cVar) {
        this.j = cVar;
    }

    @Override // gh.s
    public final void m() {
        ObjectAnimator objectAnimator = this.f9270d;
        if (objectAnimator == null || objectAnimator.isRunning()) {
            return;
        }
        if (((t) this.a).isVisible()) {
            this.f9270d.start();
        } else {
            c();
        }
    }

    @Override // gh.s
    public final void o() {
        q();
        this.f9273g = 0;
        ((p) ((ArrayList) this.f9324b).get(0)).f9313c = this.f9272f.f9291e[0];
        this.f9275i = 0.0f;
        this.f9269c.start();
    }

    @Override // gh.s
    public final void p() {
        this.j = null;
    }

    public final void q() {
        ObjectAnimator objectAnimator = this.f9269c;
        k kVar = this.f9272f;
        if (objectAnimator == null) {
            ObjectAnimator ofFloat = ObjectAnimator.ofFloat(this, f9267n, 0.0f, 1.0f);
            this.f9269c = ofFloat;
            ofFloat.setDuration((long) (kVar.f9298n * 5400.0f));
            this.f9269c.setInterpolator(null);
            this.f9269c.setRepeatCount(-1);
            this.f9269c.addListener(new f(this, 0));
        }
        if (this.f9270d == null) {
            ObjectAnimator ofFloat2 = ObjectAnimator.ofFloat(this, f9268o, 0.0f, 1.0f);
            this.f9270d = ofFloat2;
            ofFloat2.setDuration((long) (kVar.f9298n * 333.0f));
            this.f9270d.setInterpolator(this.f9271e);
            this.f9270d.addListener(new f(this, 1));
        }
    }
}
