package sg;

import android.view.View;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.c1;
import androidx.core.view.d1;
import androidx.core.view.m1;
import java.util.Iterator;
import java.util.List;

/* loaded from: classes3.dex */
public final class g extends d1 {

    /* renamed from: d, reason: collision with root package name */
    public final View f18030d;

    /* renamed from: e, reason: collision with root package name */
    public int f18031e;

    /* renamed from: i, reason: collision with root package name */
    public int f18032i;

    /* renamed from: v, reason: collision with root package name */
    public final int[] f18033v;

    public g(View view) {
        super(0);
        this.f18033v = new int[2];
        this.f18030d = view;
    }

    @Override // androidx.core.view.d1
    public final void onEnd(m1 m1Var) {
        this.f18030d.setTranslationY(0.0f);
    }

    @Override // androidx.core.view.d1
    public final void onPrepare(m1 m1Var) {
        View view = this.f18030d;
        int[] iArr = this.f18033v;
        view.getLocationOnScreen(iArr);
        this.f18031e = iArr[1];
    }

    @Override // androidx.core.view.d1
    public final WindowInsetsCompat onProgress(WindowInsetsCompat windowInsetsCompat, List list) {
        Iterator it = list.iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            if ((((m1) it.next()).a.c() & 8) != 0) {
                this.f18030d.setTranslationY(mg.a.c(this.f18032i, 0, r0.a.b()));
                break;
            }
        }
        return windowInsetsCompat;
    }

    @Override // androidx.core.view.d1
    public final c1 onStart(m1 m1Var, c1 c1Var) {
        View view = this.f18030d;
        int[] iArr = this.f18033v;
        view.getLocationOnScreen(iArr);
        int i5 = this.f18031e - iArr[1];
        this.f18032i = i5;
        view.setTranslationY(i5);
        return c1Var;
    }
}
