package androidx.appcompat.view;

import android.content.Context;
import android.view.ActionMode;
import android.view.Menu;
import android.view.MenuItem;
import androidx.appcompat.view.ActionMode;
import androidx.collection.SimpleArrayMap;
import java.util.ArrayList;
import n.j;
import n.q;
import n.y;

/* loaded from: classes.dex */
public final class b implements ActionMode.Callback {
    public final ActionMode.Callback a;

    /* renamed from: b, reason: collision with root package name */
    public final Context f803b;

    /* renamed from: c, reason: collision with root package name */
    public final ArrayList f804c = new ArrayList();

    /* renamed from: d, reason: collision with root package name */
    public final SimpleArrayMap f805d = new SimpleArrayMap(0);

    public b(Context context, ActionMode.Callback callback) {
        this.f803b = context;
        this.a = callback;
    }

    @Override // androidx.appcompat.view.ActionMode.Callback
    public final void a(ActionMode actionMode) {
        this.a.onDestroyActionMode(e(actionMode));
    }

    @Override // androidx.appcompat.view.ActionMode.Callback
    public final boolean b(ActionMode actionMode, Menu menu) {
        m.b e9 = e(actionMode);
        SimpleArrayMap simpleArrayMap = this.f805d;
        Menu menu2 = (Menu) simpleArrayMap.get(menu);
        if (menu2 == null) {
            menu2 = new y(this.f803b, (j) menu);
            simpleArrayMap.put(menu, menu2);
        }
        return this.a.onCreateActionMode(e9, menu2);
    }

    @Override // androidx.appcompat.view.ActionMode.Callback
    public final boolean c(ActionMode actionMode, Menu menu) {
        m.b e9 = e(actionMode);
        SimpleArrayMap simpleArrayMap = this.f805d;
        Menu menu2 = (Menu) simpleArrayMap.get(menu);
        if (menu2 == null) {
            menu2 = new y(this.f803b, (j) menu);
            simpleArrayMap.put(menu, menu2);
        }
        return this.a.onPrepareActionMode(e9, menu2);
    }

    @Override // androidx.appcompat.view.ActionMode.Callback
    public final boolean d(ActionMode actionMode, MenuItem menuItem) {
        return this.a.onActionItemClicked(e(actionMode), new q(this.f803b, (d1.a) menuItem));
    }

    public final m.b e(ActionMode actionMode) {
        ArrayList arrayList = this.f804c;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            m.b bVar = (m.b) arrayList.get(i5);
            if (bVar != null && bVar.f14272b == actionMode) {
                return bVar;
            }
        }
        m.b bVar2 = new m.b(this.f803b, actionMode);
        arrayList.add(bVar2);
        return bVar2;
    }
}
