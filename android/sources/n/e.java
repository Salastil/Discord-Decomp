package n;

import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import com.discord.R;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class e extends BaseAdapter {

    /* renamed from: d, reason: collision with root package name */
    public int f14632d = -1;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ f f14633e;

    public e(f fVar) {
        this.f14633e = fVar;
        a();
    }

    public final void a() {
        j jVar = this.f14633e.f14636i;
        l lVar = jVar.f14665v;
        if (lVar != null) {
            jVar.i();
            ArrayList arrayList = jVar.j;
            int size = arrayList.size();
            for (int i5 = 0; i5 < size; i5++) {
                if (((l) arrayList.get(i5)) == lVar) {
                    this.f14632d = i5;
                    return;
                }
            }
        }
        this.f14632d = -1;
    }

    @Override // android.widget.Adapter
    /* renamed from: b, reason: merged with bridge method [inline-methods] */
    public final l getItem(int i5) {
        f fVar = this.f14633e;
        j jVar = fVar.f14636i;
        jVar.i();
        ArrayList arrayList = jVar.j;
        fVar.getClass();
        int i6 = this.f14632d;
        if (i6 >= 0 && i5 >= i6) {
            i5++;
        }
        return (l) arrayList.get(i5);
    }

    @Override // android.widget.Adapter
    public final int getCount() {
        f fVar = this.f14633e;
        j jVar = fVar.f14636i;
        jVar.i();
        int size = jVar.j.size();
        fVar.getClass();
        return this.f14632d < 0 ? size : size - 1;
    }

    @Override // android.widget.Adapter
    public final long getItemId(int i5) {
        return i5;
    }

    @Override // android.widget.Adapter
    public final View getView(int i5, View view, ViewGroup viewGroup) {
        if (view == null) {
            view = this.f14633e.f14635e.inflate(R.layout.abc_list_menu_item_layout, viewGroup, false);
        }
        ((w) view).a(getItem(i5));
        return view;
    }

    @Override // android.widget.BaseAdapter
    public final void notifyDataSetChanged() {
        a();
        super.notifyDataSetChanged();
    }
}
