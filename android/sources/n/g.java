package n;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import androidx.appcompat.view.menu.ListMenuItemView;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class g extends BaseAdapter {

    /* renamed from: d, reason: collision with root package name */
    public final j f14640d;

    /* renamed from: e, reason: collision with root package name */
    public int f14641e = -1;

    /* renamed from: i, reason: collision with root package name */
    public boolean f14642i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f14643v;

    /* renamed from: w, reason: collision with root package name */
    public final LayoutInflater f14644w;

    /* renamed from: x, reason: collision with root package name */
    public final int f14645x;

    public g(j jVar, LayoutInflater layoutInflater, boolean z5, int i5) {
        this.f14643v = z5;
        this.f14644w = layoutInflater;
        this.f14640d = jVar;
        this.f14645x = i5;
        a();
    }

    public final void a() {
        j jVar = this.f14640d;
        l lVar = jVar.f14665v;
        if (lVar != null) {
            jVar.i();
            ArrayList arrayList = jVar.j;
            int size = arrayList.size();
            for (int i5 = 0; i5 < size; i5++) {
                if (((l) arrayList.get(i5)) == lVar) {
                    this.f14641e = i5;
                    return;
                }
            }
        }
        this.f14641e = -1;
    }

    @Override // android.widget.Adapter
    /* renamed from: b, reason: merged with bridge method [inline-methods] */
    public final l getItem(int i5) {
        ArrayList l6;
        boolean z5 = this.f14643v;
        j jVar = this.f14640d;
        if (z5) {
            jVar.i();
            l6 = jVar.j;
        } else {
            l6 = jVar.l();
        }
        int i6 = this.f14641e;
        if (i6 >= 0 && i5 >= i6) {
            i5++;
        }
        return (l) l6.get(i5);
    }

    @Override // android.widget.Adapter
    public final int getCount() {
        ArrayList l6;
        boolean z5 = this.f14643v;
        j jVar = this.f14640d;
        if (z5) {
            jVar.i();
            l6 = jVar.j;
        } else {
            l6 = jVar.l();
        }
        return this.f14641e < 0 ? l6.size() : l6.size() - 1;
    }

    @Override // android.widget.Adapter
    public final long getItemId(int i5) {
        return i5;
    }

    @Override // android.widget.Adapter
    public final View getView(int i5, View view, ViewGroup viewGroup) {
        boolean z5 = false;
        if (view == null) {
            view = this.f14644w.inflate(this.f14645x, viewGroup, false);
        }
        int i6 = getItem(i5).f14671b;
        int i10 = i5 - 1;
        int i11 = i10 >= 0 ? getItem(i10).f14671b : i6;
        ListMenuItemView listMenuItemView = (ListMenuItemView) view;
        if (this.f14640d.m() && i6 != i11) {
            z5 = true;
        }
        listMenuItemView.setGroupDividerEnabled(z5);
        w wVar = (w) view;
        if (this.f14642i) {
            listMenuItemView.setForceShowIcon(true);
        }
        wVar.a(getItem(i5));
        return view;
    }

    @Override // android.widget.BaseAdapter
    public final void notifyDataSetChanged() {
        a();
        super.notifyDataSetChanged();
    }
}
