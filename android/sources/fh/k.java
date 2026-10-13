package fh;

import android.content.Context;
import android.os.Parcelable;
import android.util.SparseArray;
import android.view.MenuItem;
import m3.x;
import n.b0;
import n.v;

/* loaded from: classes3.dex */
public final class k implements v {

    /* renamed from: d, reason: collision with root package name */
    public rg.b f8615d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f8616e;

    /* renamed from: i, reason: collision with root package name */
    public int f8617i;

    @Override // n.v
    public final void a(boolean z5) {
        g gVar;
        int i5;
        m3.a aVar;
        if (this.f8616e) {
            return;
        }
        if (z5) {
            this.f8615d.a();
            return;
        }
        rg.b bVar = this.f8615d;
        g gVar2 = bVar.f8599m0;
        if (gVar2 == null || bVar.f8612y == null) {
            return;
        }
        bVar.f8598l0.f8616e = true;
        gVar2.b();
        bVar.f8598l0.f8616e = false;
        if (bVar.f8612y != null && (gVar = bVar.f8599m0) != null && gVar.f8580b.size() == bVar.f8612y.length) {
            for (0; i5 < bVar.f8612y.length; i5 + 1) {
                if (!(bVar.f8599m0.a(i5) instanceof a) || (bVar.f8612y[i5] instanceof b)) {
                    i5 = ((bVar.f8599m0.a(i5) instanceof a) || !((bVar.f8599m0.a(i5).hasSubMenu() && !(bVar.f8612y[i5] instanceof l)) || ((bVar.f8599m0.a(i5).hasSubMenu() || (bVar.f8612y[i5] instanceof e)) ? false : true))) ? i5 + 1 : 0;
                }
            }
            int i6 = bVar.E;
            int size = bVar.f8599m0.f8580b.size();
            for (int i10 = 0; i10 < size; i10++) {
                MenuItem a = bVar.f8599m0.a(i10);
                if (a.isChecked()) {
                    bVar.setCheckedItem(a);
                    bVar.E = a.getItemId();
                    bVar.F = i10;
                }
            }
            if (i6 != bVar.E && (aVar = bVar.f8588d) != null) {
                x.a(bVar, aVar);
            }
            int i11 = bVar.f8610w;
            boolean z6 = i11 != -1 ? i11 == 0 : bVar.getCurrentVisibleContentItemCount() > 3;
            for (int i12 = 0; i12 < size; i12++) {
                bVar.f8598l0.f8616e = true;
                bVar.f8612y[i12].setExpanded(bVar.f8604r0);
                h hVar = bVar.f8612y[i12];
                if (hVar instanceof e) {
                    e eVar = (e) hVar;
                    eVar.setLabelVisibilityMode(bVar.f8610w);
                    eVar.setItemIconGravity(bVar.f8611x);
                    eVar.setItemGravity(bVar.h0);
                    eVar.setShifting(z6);
                }
                if (bVar.f8599m0.a(i12) instanceof n.l) {
                    bVar.f8612y[i12].a((n.l) bVar.f8599m0.a(i12));
                }
                bVar.f8598l0.f8616e = false;
            }
            return;
        }
        bVar.a();
    }

    @Override // n.v
    public final void c(Context context, n.j jVar) {
        this.f8615d.b(jVar);
    }

    @Override // n.v
    public final boolean d(b0 b0Var) {
        return false;
    }

    @Override // n.v
    public final boolean e() {
        return false;
    }

    @Override // n.v
    public final void f(Parcelable parcelable) {
        if (parcelable instanceof j) {
            rg.b bVar = this.f8615d;
            j jVar = (j) parcelable;
            int i5 = jVar.f8613d;
            int size = bVar.f8599m0.f8580b.size();
            int i6 = 0;
            while (true) {
                if (i6 >= size) {
                    break;
                }
                MenuItem a = bVar.f8599m0.a(i6);
                if (i5 == a.getItemId()) {
                    bVar.E = i5;
                    bVar.F = i6;
                    bVar.setCheckedItem(a);
                    break;
                }
                i6++;
            }
            Context context = this.f8615d.getContext();
            ch.g gVar = jVar.f8614e;
            SparseArray sparseArray = new SparseArray(gVar.size());
            for (int i10 = 0; i10 < gVar.size(); i10++) {
                int keyAt = gVar.keyAt(i10);
                og.b bVar2 = (og.b) gVar.valueAt(i10);
                sparseArray.put(keyAt, bVar2 != null ? new og.a(context, bVar2) : null);
            }
            rg.b bVar3 = this.f8615d;
            SparseArray sparseArray2 = bVar3.S;
            for (int i11 = 0; i11 < sparseArray.size(); i11++) {
                int keyAt2 = sparseArray.keyAt(i11);
                if (sparseArray2.indexOfKey(keyAt2) < 0) {
                    sparseArray2.append(keyAt2, (og.a) sparseArray.get(keyAt2));
                }
            }
            h[] hVarArr = bVar3.f8612y;
            if (hVarArr != null) {
                for (h hVar : hVarArr) {
                    if (hVar instanceof e) {
                        e eVar = (e) hVar;
                        og.a aVar = (og.a) sparseArray2.get(eVar.getId());
                        if (aVar != null) {
                            eVar.setBadge(aVar);
                        }
                    }
                }
            }
        }
    }

    @Override // n.v
    public final boolean g(n.l lVar) {
        return false;
    }

    @Override // n.v
    public final int getId() {
        return this.f8617i;
    }

    @Override // n.v
    public final Parcelable i() {
        j jVar = new j();
        jVar.f8613d = this.f8615d.getSelectedItemId();
        SparseArray<og.a> badgeDrawables = this.f8615d.getBadgeDrawables();
        ch.g gVar = new ch.g();
        for (int i5 = 0; i5 < badgeDrawables.size(); i5++) {
            int keyAt = badgeDrawables.keyAt(i5);
            og.a valueAt = badgeDrawables.valueAt(i5);
            gVar.put(keyAt, valueAt != null ? valueAt.f15865w.a : null);
        }
        jVar.f8614e = gVar;
        return jVar;
    }

    @Override // n.v
    public final boolean k(n.l lVar) {
        return false;
    }

    @Override // n.v
    public final void b(n.j jVar, boolean z5) {
    }
}
