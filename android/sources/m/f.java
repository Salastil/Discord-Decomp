package m;

import android.view.View;
import android.view.animation.Interpolator;
import androidx.appcompat.widget.w3;
import androidx.core.view.a1;
import androidx.core.view.b1;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes.dex */
public final class f {

    /* renamed from: c, reason: collision with root package name */
    public Interpolator f14304c;

    /* renamed from: d, reason: collision with root package name */
    public b1 f14305d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f14306e;

    /* renamed from: b, reason: collision with root package name */
    public long f14303b = -1;

    /* renamed from: f, reason: collision with root package name */
    public final w3 f14307f = new w3(this);
    public final ArrayList a = new ArrayList();

    public final void a() {
        if (this.f14306e) {
            Iterator it = this.a.iterator();
            while (it.hasNext()) {
                ((a1) it.next()).b();
            }
            this.f14306e = false;
        }
    }

    public final void b() {
        View view;
        if (this.f14306e) {
            return;
        }
        Iterator it = this.a.iterator();
        while (it.hasNext()) {
            a1 a1Var = (a1) it.next();
            long j = this.f14303b;
            if (j >= 0) {
                a1Var.c(j);
            }
            Interpolator interpolator = this.f14304c;
            if (interpolator != null && (view = (View) a1Var.a.get()) != null) {
                view.animate().setInterpolator(interpolator);
            }
            if (this.f14305d != null) {
                a1Var.d(this.f14307f);
            }
            View view2 = (View) a1Var.a.get();
            if (view2 != null) {
                view2.animate().start();
            }
        }
        this.f14306e = true;
    }
}
