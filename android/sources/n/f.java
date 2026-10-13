package n;

import android.content.Context;
import android.os.Bundle;
import android.os.Parcelable;
import android.util.SparseArray;
import android.view.LayoutInflater;
import android.view.View;
import android.view.WindowManager;
import android.widget.AdapterView;
import androidx.appcompat.view.menu.ExpandedMenuView;
import com.discord.key_commands.KeyCommandDescriptor;

/* loaded from: classes.dex */
public final class f implements v, AdapterView.OnItemClickListener {

    /* renamed from: d, reason: collision with root package name */
    public Context f14634d;

    /* renamed from: e, reason: collision with root package name */
    public LayoutInflater f14635e;

    /* renamed from: i, reason: collision with root package name */
    public j f14636i;

    /* renamed from: v, reason: collision with root package name */
    public ExpandedMenuView f14637v;

    /* renamed from: w, reason: collision with root package name */
    public u f14638w;

    /* renamed from: x, reason: collision with root package name */
    public e f14639x;

    public f(Context context) {
        this.f14634d = context;
        this.f14635e = LayoutInflater.from(context);
    }

    @Override // n.v
    public final void a(boolean z5) {
        e eVar = this.f14639x;
        if (eVar != null) {
            eVar.notifyDataSetChanged();
        }
    }

    @Override // n.v
    public final void b(j jVar, boolean z5) {
        u uVar = this.f14638w;
        if (uVar != null) {
            uVar.b(jVar, z5);
        }
    }

    @Override // n.v
    public final void c(Context context, j jVar) {
        if (this.f14634d != null) {
            this.f14634d = context;
            if (this.f14635e == null) {
                this.f14635e = LayoutInflater.from(context);
            }
        }
        this.f14636i = jVar;
        e eVar = this.f14639x;
        if (eVar != null) {
            eVar.notifyDataSetChanged();
        }
    }

    @Override // n.v
    public final boolean d(b0 b0Var) {
        boolean hasVisibleItems = b0Var.hasVisibleItems();
        Context context = b0Var.a;
        if (!hasVisibleItems) {
            return false;
        }
        k kVar = new k();
        kVar.f14668d = b0Var;
        i.e eVar = new i.e(context);
        f fVar = new f(eVar.getContext());
        kVar.f14670i = fVar;
        fVar.f14638w = kVar;
        b0Var.b(fVar, context);
        f fVar2 = kVar.f14670i;
        if (fVar2.f14639x == null) {
            fVar2.f14639x = new e(fVar2);
        }
        e eVar2 = fVar2.f14639x;
        i.b bVar = eVar.a;
        bVar.f10266o = eVar2;
        bVar.f10267p = kVar;
        View view = b0Var.f14658o;
        if (view != null) {
            bVar.f10258e = view;
        } else {
            bVar.f10256c = b0Var.f14657n;
            eVar.setTitle(b0Var.f14656m);
        }
        bVar.f10264m = kVar;
        i.f create = eVar.create();
        kVar.f14669e = create;
        create.setOnDismissListener(kVar);
        WindowManager.LayoutParams attributes = kVar.f14669e.getWindow().getAttributes();
        attributes.type = 1003;
        attributes.flags |= KeyCommandDescriptor.ModifierFlags.SHIFT;
        kVar.f14669e.show();
        u uVar = this.f14638w;
        if (uVar == null) {
            return true;
        }
        uVar.h(b0Var);
        return true;
    }

    @Override // n.v
    public final boolean e() {
        return false;
    }

    @Override // n.v
    public final void f(Parcelable parcelable) {
        SparseArray<Parcelable> sparseParcelableArray = ((Bundle) parcelable).getSparseParcelableArray("android:menu:list");
        if (sparseParcelableArray != null) {
            this.f14637v.restoreHierarchyState(sparseParcelableArray);
        }
    }

    @Override // n.v
    public final boolean g(l lVar) {
        return false;
    }

    @Override // n.v
    public final int getId() {
        return 0;
    }

    @Override // n.v
    public final Parcelable i() {
        if (this.f14637v == null) {
            return null;
        }
        Bundle bundle = new Bundle();
        SparseArray<Parcelable> sparseArray = new SparseArray<>();
        ExpandedMenuView expandedMenuView = this.f14637v;
        if (expandedMenuView != null) {
            expandedMenuView.saveHierarchyState(sparseArray);
        }
        bundle.putSparseParcelableArray("android:menu:list", sparseArray);
        return bundle;
    }

    @Override // n.v
    public final void j(u uVar) {
        throw null;
    }

    @Override // n.v
    public final boolean k(l lVar) {
        return false;
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public final void onItemClick(AdapterView adapterView, View view, int i5, long j) {
        this.f14636i.q(this.f14639x.getItem(i5), this, 0);
    }
}
