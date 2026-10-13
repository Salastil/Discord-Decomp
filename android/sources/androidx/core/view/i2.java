package androidx.core.view;

import android.os.CancellationSignal;
import android.view.View;
import android.view.Window;
import android.view.WindowInsetsController;
import android.view.animation.LinearInterpolator;
import androidx.collection.SimpleArrayMap;
import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes.dex */
public class i2 extends zk.a {
    public final WindowInsetsController j;
    public final ve.i k;

    /* renamed from: l, reason: collision with root package name */
    public final Window f1603l;

    public i2(WindowInsetsController windowInsetsController, ve.i iVar) {
        new SimpleArrayMap(0);
        this.j = windowInsetsController;
        this.k = iVar;
    }

    @Override // zk.a
    public final void G(boolean z5) {
        Window window = this.f1603l;
        if (z5) {
            if (window != null) {
                P(16);
            }
            this.j.setSystemBarsAppearance(16, 16);
        } else {
            if (window != null) {
                Q(16);
            }
            this.j.setSystemBarsAppearance(0, 16);
        }
    }

    @Override // zk.a
    public final void H(boolean z5) {
        Window window = this.f1603l;
        if (z5) {
            if (window != null) {
                P(8192);
            }
            this.j.setSystemBarsAppearance(8, 8);
        } else {
            if (window != null) {
                Q(8192);
            }
            this.j.setSystemBarsAppearance(0, 8);
        }
    }

    @Override // zk.a
    public void J() {
        Window window = this.f1603l;
        if (window == null) {
            this.j.setSystemBarsBehavior(2);
            return;
        }
        window.getDecorView().setTag(356039078, 2);
        Q(RecyclerView.ItemAnimator.FLAG_MOVED);
        P(RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT);
    }

    @Override // zk.a
    public final void L(int i5) {
        if ((i5 & 8) != 0) {
            ((u4.c) this.k.f19405d).E();
        }
        this.j.show(i5 & (-9));
    }

    public final void P(int i5) {
        View decorView = this.f1603l.getDecorView();
        decorView.setSystemUiVisibility(i5 | decorView.getSystemUiVisibility());
    }

    public final void Q(int i5) {
        View decorView = this.f1603l.getDecorView();
        decorView.setSystemUiVisibility((~i5) & decorView.getSystemUiVisibility());
    }

    @Override // zk.a
    public final void e(LinearInterpolator linearInterpolator, CancellationSignal cancellationSignal, ul.a aVar) {
        this.j.controlWindowInsetsAnimation(8, -1L, linearInterpolator, cancellationSignal, new h2(aVar));
    }

    @Override // zk.a
    public final void u(int i5) {
        if ((i5 & 8) != 0) {
            ((u4.c) this.k.f19405d).D();
        }
        this.j.hide(i5 & (-9));
    }

    @Override // zk.a
    public boolean v() {
        this.j.setSystemBarsAppearance(0, 0);
        return (this.j.getSystemBarsAppearance() & 8) != 0;
    }

    public i2(Window window, ve.i iVar) {
        this(window.getInsetsController(), iVar);
        this.f1603l = window;
    }
}
