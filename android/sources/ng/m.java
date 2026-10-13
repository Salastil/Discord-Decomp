package ng;

import android.view.View;
import androidx.core.view.s0;
import java.util.WeakHashMap;

/* loaded from: classes3.dex */
public final class m {
    public final View a;

    /* renamed from: b, reason: collision with root package name */
    public int f15465b;

    /* renamed from: c, reason: collision with root package name */
    public int f15466c;

    /* renamed from: d, reason: collision with root package name */
    public int f15467d;

    public m(View view) {
        this.a = view;
    }

    public final void a() {
        int i5 = this.f15467d;
        View view = this.a;
        int top = i5 - (view.getTop() - this.f15465b);
        WeakHashMap weakHashMap = s0.a;
        view.offsetTopAndBottom(top);
        view.offsetLeftAndRight(0 - (view.getLeft() - this.f15466c));
    }

    public final boolean b(int i5) {
        if (this.f15467d == i5) {
            return false;
        }
        this.f15467d = i5;
        a();
        return true;
    }
}
