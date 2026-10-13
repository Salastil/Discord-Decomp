package androidx.appcompat.widget;

import android.content.DialogInterface;
import android.graphics.drawable.Drawable;
import android.util.Log;
import android.widget.ListAdapter;
import androidx.appcompat.app.AlertController$RecycleListView;

/* loaded from: classes.dex */
public final class l0 implements r0, DialogInterface.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public i.f f1024d;

    /* renamed from: e, reason: collision with root package name */
    public m0 f1025e;

    /* renamed from: i, reason: collision with root package name */
    public CharSequence f1026i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ s0 f1027v;

    public l0(s0 s0Var) {
        this.f1027v = s0Var;
    }

    @Override // androidx.appcompat.widget.r0
    public final int a() {
        return 0;
    }

    @Override // androidx.appcompat.widget.r0
    public final void b(int i5) {
        Log.e("AppCompatSpinner", "Cannot set horizontal offset for MODE_DIALOG, ignoring");
    }

    @Override // androidx.appcompat.widget.r0
    public final CharSequence c() {
        return this.f1026i;
    }

    @Override // androidx.appcompat.widget.r0
    public final Drawable d() {
        return null;
    }

    @Override // androidx.appcompat.widget.r0
    public final void dismiss() {
        i.f fVar = this.f1024d;
        if (fVar != null) {
            fVar.dismiss();
            this.f1024d = null;
        }
    }

    @Override // androidx.appcompat.widget.r0
    public final void e(CharSequence charSequence) {
        this.f1026i = charSequence;
    }

    @Override // androidx.appcompat.widget.r0
    public final void f(Drawable drawable) {
        Log.e("AppCompatSpinner", "Cannot set popup background for MODE_DIALOG, ignoring");
    }

    @Override // androidx.appcompat.widget.r0
    public final void i(int i5) {
        Log.e("AppCompatSpinner", "Cannot set vertical offset for MODE_DIALOG, ignoring");
    }

    @Override // androidx.appcompat.widget.r0
    public final boolean isShowing() {
        i.f fVar = this.f1024d;
        if (fVar != null) {
            return fVar.isShowing();
        }
        return false;
    }

    @Override // androidx.appcompat.widget.r0
    public final void j(int i5) {
        Log.e("AppCompatSpinner", "Cannot set horizontal (original) offset for MODE_DIALOG, ignoring");
    }

    @Override // androidx.appcompat.widget.r0
    public final void k(int i5, int i6) {
        if (this.f1025e == null) {
            return;
        }
        s0 s0Var = this.f1027v;
        i.e eVar = new i.e(s0Var.getPopupContext());
        CharSequence charSequence = this.f1026i;
        if (charSequence != null) {
            eVar.setTitle(charSequence);
        }
        m0 m0Var = this.f1025e;
        int selectedItemPosition = s0Var.getSelectedItemPosition();
        i.b bVar = eVar.a;
        bVar.f10266o = m0Var;
        bVar.f10267p = this;
        bVar.f10270s = selectedItemPosition;
        bVar.f10269r = true;
        i.f create = eVar.create();
        this.f1024d = create;
        AlertController$RecycleListView alertController$RecycleListView = create.f10310x.f10282f;
        alertController$RecycleListView.setTextDirection(i5);
        alertController$RecycleListView.setTextAlignment(i6);
        this.f1024d.show();
    }

    @Override // androidx.appcompat.widget.r0
    public final int l() {
        return 0;
    }

    @Override // androidx.appcompat.widget.r0
    public final void m(ListAdapter listAdapter) {
        this.f1025e = (m0) listAdapter;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public final void onClick(DialogInterface dialogInterface, int i5) {
        s0 s0Var = this.f1027v;
        s0Var.setSelection(i5);
        if (s0Var.getOnItemClickListener() != null) {
            s0Var.performItemClick(null, i5, this.f1025e.getItemId(i5));
        }
        dismiss();
    }
}
