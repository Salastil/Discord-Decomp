package androidx.core.view;

import android.os.CancellationSignal;
import android.view.View;
import android.view.Window;
import android.view.animation.LinearInterpolator;
import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;

/* loaded from: classes.dex */
public class f2 extends zk.a {
    public final Window j;
    public final ve.i k;

    public f2(Window window, ve.i iVar) {
        this.j = window;
        this.k = iVar;
    }

    @Override // zk.a
    public final void H(boolean z5) {
        if (!z5) {
            Q(8192);
            return;
        }
        Window window = this.j;
        window.clearFlags(67108864);
        window.addFlags(Integer.MIN_VALUE);
        P(8192);
    }

    @Override // zk.a
    public final void J() {
        this.j.getDecorView().setTag(356039078, 2);
        Q(RecyclerView.ItemAnimator.FLAG_MOVED);
        P(RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT);
    }

    @Override // zk.a
    public final void L(int i5) {
        for (int i6 = 1; i6 <= 512; i6 <<= 1) {
            if ((i5 & i6) != 0) {
                if (i6 == 1) {
                    Q(4);
                    this.j.clearFlags(IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET);
                } else if (i6 == 2) {
                    Q(2);
                } else if (i6 == 8) {
                    ((u4.c) this.k.f19405d).E();
                }
            }
        }
    }

    public final void P(int i5) {
        View decorView = this.j.getDecorView();
        decorView.setSystemUiVisibility(i5 | decorView.getSystemUiVisibility());
    }

    public final void Q(int i5) {
        View decorView = this.j.getDecorView();
        decorView.setSystemUiVisibility((~i5) & decorView.getSystemUiVisibility());
    }

    @Override // zk.a
    public final void u(int i5) {
        for (int i6 = 1; i6 <= 512; i6 <<= 1) {
            if ((i5 & i6) != 0) {
                if (i6 == 1) {
                    P(4);
                } else if (i6 == 2) {
                    P(2);
                } else if (i6 == 8) {
                    ((u4.c) this.k.f19405d).D();
                }
            }
        }
    }

    @Override // zk.a
    public final boolean v() {
        return (this.j.getDecorView().getSystemUiVisibility() & 8192) != 0;
    }

    @Override // zk.a
    public final void e(LinearInterpolator linearInterpolator, CancellationSignal cancellationSignal, ul.a aVar) {
    }
}
