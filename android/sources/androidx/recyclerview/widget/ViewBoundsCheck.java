package androidx.recyclerview.widget;

import android.view.View;

/* loaded from: classes.dex */
public final class ViewBoundsCheck {
    public final Callback a;

    /* renamed from: b, reason: collision with root package name */
    public final ak.a f2353b;

    public interface Callback {
        int a(View view);

        int b();

        int c();

        int d(View view);

        View getChildAt(int i5);
    }

    public ViewBoundsCheck(Callback callback) {
        this.a = callback;
        ak.a aVar = new ak.a();
        aVar.f649b = 0;
        this.f2353b = aVar;
    }

    public final View a(int i5, int i6, int i10, int i11) {
        Callback callback = this.a;
        int b10 = callback.b();
        int c6 = callback.c();
        int i12 = i6 > i5 ? 1 : -1;
        View view = null;
        while (i5 != i6) {
            View childAt = callback.getChildAt(i5);
            int a = callback.a(childAt);
            int d6 = callback.d(childAt);
            ak.a aVar = this.f2353b;
            aVar.f650c = b10;
            aVar.f651d = c6;
            aVar.f652e = a;
            aVar.f653f = d6;
            if (i10 != 0) {
                aVar.f649b = i10;
                if (aVar.a()) {
                    return childAt;
                }
            }
            if (i11 != 0) {
                aVar.f649b = i11;
                if (aVar.a()) {
                    view = childAt;
                }
            }
            i5 += i12;
        }
        return view;
    }

    public final boolean b(View view) {
        Callback callback = this.a;
        int b10 = callback.b();
        int c6 = callback.c();
        int a = callback.a(view);
        int d6 = callback.d(view);
        ak.a aVar = this.f2353b;
        aVar.f650c = b10;
        aVar.f651d = c6;
        aVar.f652e = a;
        aVar.f653f = d6;
        aVar.f649b = 24579;
        return aVar.a();
    }
}
