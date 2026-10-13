package n;

import android.content.Context;
import android.graphics.Point;
import android.graphics.Rect;
import android.view.Display;
import android.view.Gravity;
import android.view.View;
import android.view.WindowManager;
import android.widget.PopupWindow;
import com.discord.R;

/* loaded from: classes.dex */
public class t {
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final j f14702b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f14703c;

    /* renamed from: d, reason: collision with root package name */
    public final int f14704d;

    /* renamed from: e, reason: collision with root package name */
    public View f14705e;

    /* renamed from: g, reason: collision with root package name */
    public boolean f14707g;

    /* renamed from: h, reason: collision with root package name */
    public u f14708h;

    /* renamed from: i, reason: collision with root package name */
    public r f14709i;
    public PopupWindow.OnDismissListener j;

    /* renamed from: f, reason: collision with root package name */
    public int f14706f = 8388611;
    public final s k = new s(this);

    public t(Context context, j jVar, View view, boolean z5, int i5, int i6) {
        this.a = context;
        this.f14702b = jVar;
        this.f14705e = view;
        this.f14703c = z5;
        this.f14704d = i5;
    }

    public final r a() {
        r a0Var;
        if (this.f14709i == null) {
            Context context = this.a;
            Display defaultDisplay = ((WindowManager) context.getSystemService("window")).getDefaultDisplay();
            Point point = new Point();
            defaultDisplay.getRealSize(point);
            if (Math.min(point.x, point.y) >= context.getResources().getDimensionPixelSize(R.dimen.abc_cascading_menus_min_smallest_width)) {
                a0Var = new d(context, this.f14705e, this.f14704d, this.f14703c);
            } else {
                a0Var = new a0(this.a, this.f14702b, this.f14705e, this.f14704d, this.f14703c);
            }
            a0Var.l(this.f14702b);
            a0Var.r(this.k);
            a0Var.n(this.f14705e);
            a0Var.j(this.f14708h);
            a0Var.o(this.f14707g);
            a0Var.p(this.f14706f);
            this.f14709i = a0Var;
        }
        return this.f14709i;
    }

    public final boolean b() {
        r rVar = this.f14709i;
        return rVar != null && rVar.isShowing();
    }

    public void c() {
        this.f14709i = null;
        PopupWindow.OnDismissListener onDismissListener = this.j;
        if (onDismissListener != null) {
            onDismissListener.onDismiss();
        }
    }

    public final void d(int i5, int i6, boolean z5, boolean z6) {
        r a = a();
        a.s(z6);
        if (z5) {
            if ((Gravity.getAbsoluteGravity(this.f14706f, this.f14705e.getLayoutDirection()) & 7) == 5) {
                i5 -= this.f14705e.getWidth();
            }
            a.q(i5);
            a.t(i6);
            int i10 = (int) ((this.a.getResources().getDisplayMetrics().density * 48.0f) / 2.0f);
            a.f14700d = new Rect(i5 - i10, i6 - i10, i5 + i10, i6 + i10);
        }
        a.show();
    }
}
