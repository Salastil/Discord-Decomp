package fh;

import android.view.MenuItem;
import android.view.SubMenu;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class g {
    public final n.j a;

    /* renamed from: c, reason: collision with root package name */
    public int f8581c = 0;

    /* renamed from: d, reason: collision with root package name */
    public int f8582d = 0;

    /* renamed from: e, reason: collision with root package name */
    public int f8583e = 0;

    /* renamed from: b, reason: collision with root package name */
    public final ArrayList f8580b = new ArrayList();

    public g(n.j jVar) {
        this.a = jVar;
        b();
    }

    public final MenuItem a(int i5) {
        return (MenuItem) this.f8580b.get(i5);
    }

    public final void b() {
        ArrayList arrayList = this.f8580b;
        arrayList.clear();
        this.f8581c = 0;
        this.f8582d = 0;
        this.f8583e = 0;
        int i5 = 0;
        while (true) {
            n.j jVar = this.a;
            if (i5 >= jVar.f14651f.size()) {
                break;
            }
            MenuItem item = jVar.getItem(i5);
            if (item.hasSubMenu()) {
                if (!arrayList.isEmpty() && !(k0.d.f(1, arrayList) instanceof a) && item.isVisible()) {
                    arrayList.add(new a());
                }
                arrayList.add(item);
                SubMenu subMenu = item.getSubMenu();
                for (int i6 = 0; i6 < subMenu.size(); i6++) {
                    MenuItem item2 = subMenu.getItem(i6);
                    if (!item.isVisible()) {
                        item2.setVisible(false);
                    }
                    arrayList.add(item2);
                    this.f8581c++;
                    if (item2.isVisible()) {
                        this.f8582d++;
                    }
                }
                arrayList.add(new a());
            } else {
                arrayList.add(item);
                this.f8581c++;
                if (item.isVisible()) {
                    this.f8582d++;
                    this.f8583e++;
                }
            }
            i5++;
        }
        if (arrayList.isEmpty() || !(k0.d.f(1, arrayList) instanceof a)) {
            return;
        }
        arrayList.remove(arrayList.size() - 1);
    }
}
