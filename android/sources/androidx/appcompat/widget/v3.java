package androidx.appcompat.widget;

import android.content.Context;
import android.view.View;
import android.view.Window;
import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes.dex */
public final class v3 implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final n.a f1139d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ x3 f1140e;

    public v3(x3 x3Var) {
        this.f1140e = x3Var;
        Context context = x3Var.a.getContext();
        CharSequence charSequence = x3Var.f1166h;
        n.a aVar = new n.a();
        aVar.f14607e = RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
        aVar.f14609g = RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
        aVar.f14612l = null;
        aVar.f14613m = null;
        aVar.f14614n = false;
        aVar.f14615o = false;
        aVar.f14616p = 16;
        aVar.f14611i = context;
        aVar.a = charSequence;
        this.f1139d = aVar;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        x3 x3Var = this.f1140e;
        Window.Callback callback = x3Var.k;
        if (callback == null || !x3Var.f1168l) {
            return;
        }
        callback.onMenuItemSelected(0, this.f1139d);
    }
}
