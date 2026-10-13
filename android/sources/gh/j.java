package gh;

import android.animation.ObjectAnimator;
import android.animation.TimeInterpolator;
import android.content.Context;
import com.discord.R;
import com.discord.js_watchdog.JSWatchdogManagerKt;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class j extends s {
    public static final q2.a k = mg.a.f14493b;

    /* renamed from: l, reason: collision with root package name */
    public static final int[] f9277l = {0, JSWatchdogManagerKt.FREEZE_CHECK_DELAY_MS, 3000, 4500};

    /* renamed from: m, reason: collision with root package name */
    public static final float[] f9278m = {0.1f, 0.87f};

    /* renamed from: n, reason: collision with root package name */
    public static final g f9279n = new g(Float.class, "animationFraction", 2);

    /* renamed from: o, reason: collision with root package name */
    public static final g f9280o = new g(Float.class, "completeEndFraction", 3);

    /* renamed from: c, reason: collision with root package name */
    public ObjectAnimator f9281c;

    /* renamed from: d, reason: collision with root package name */
    public ObjectAnimator f9282d;

    /* renamed from: e, reason: collision with root package name */
    public final TimeInterpolator f9283e;

    /* renamed from: f, reason: collision with root package name */
    public final k f9284f;

    /* renamed from: h, reason: collision with root package name */
    public float f9286h;

    /* renamed from: i, reason: collision with root package name */
    public float f9287i;

    /* renamed from: g, reason: collision with root package name */
    public int f9285g = 0;
    public c j = null;

    public j(Context context, k kVar) {
        this.f9284f = kVar;
        this.f9283e = ta.a.H(context, R.attr.motionEasingStandardInterpolator, k);
    }

    @Override // gh.s
    public final void c() {
        ObjectAnimator objectAnimator = this.f9281c;
        if (objectAnimator != null) {
            objectAnimator.cancel();
        }
    }

    @Override // gh.s
    public final void i() {
        q();
        ObjectAnimator objectAnimator = this.f9281c;
        k kVar = this.f9284f;
        objectAnimator.setDuration((long) (kVar.f9298n * 6000.0f));
        this.f9282d.setDuration((long) (kVar.f9298n * 500.0f));
        this.f9285g = 0;
        ((p) ((ArrayList) this.f9324b).get(0)).f9313c = kVar.f9291e[0];
        this.f9287i = 0.0f;
    }

    @Override // gh.s
    public final void l(c cVar) {
        this.j = cVar;
    }

    @Override // gh.s
    public final void m() {
        ObjectAnimator objectAnimator = this.f9282d;
        if (objectAnimator == null || objectAnimator.isRunning()) {
            return;
        }
        if (((t) this.a).isVisible()) {
            this.f9282d.start();
        } else {
            c();
        }
    }

    @Override // gh.s
    public final void o() {
        q();
        this.f9285g = 0;
        ((p) ((ArrayList) this.f9324b).get(0)).f9313c = this.f9284f.f9291e[0];
        this.f9287i = 0.0f;
        this.f9281c.start();
    }

    @Override // gh.s
    public final void p() {
        this.j = null;
    }

    public final void q() {
        ObjectAnimator objectAnimator = this.f9281c;
        k kVar = this.f9284f;
        if (objectAnimator == null) {
            ObjectAnimator ofFloat = ObjectAnimator.ofFloat(this, f9279n, 0.0f, 1.0f);
            this.f9281c = ofFloat;
            ofFloat.setDuration((long) (kVar.f9298n * 6000.0f));
            this.f9281c.setInterpolator(null);
            this.f9281c.setRepeatCount(-1);
            this.f9281c.addListener(new i(this, 0));
        }
        if (this.f9282d == null) {
            ObjectAnimator ofFloat2 = ObjectAnimator.ofFloat(this, f9280o, 0.0f, 1.0f);
            this.f9282d = ofFloat2;
            ofFloat2.setDuration((long) (kVar.f9298n * 500.0f));
            this.f9282d.addListener(new i(this, 1));
        }
    }
}
