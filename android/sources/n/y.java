package n;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.view.KeyEvent;
import android.view.Menu;
import android.view.MenuItem;
import android.view.SubMenu;
import androidx.collection.SimpleArrayMap;

/* loaded from: classes.dex */
public class y extends gh.s implements Menu {

    /* renamed from: c, reason: collision with root package name */
    public final j f14710c;

    public y(Context context, j jVar) {
        super(context);
        if (jVar == null) {
            throw new IllegalArgumentException("Wrapped Object can not be null.");
        }
        this.f14710c = jVar;
    }

    @Override // android.view.Menu
    public final MenuItem add(CharSequence charSequence) {
        return h(this.f14710c.a(0, 0, 0, charSequence));
    }

    @Override // android.view.Menu
    public final int addIntentOptions(int i5, int i6, int i10, ComponentName componentName, Intent[] intentArr, Intent intent, int i11, MenuItem[] menuItemArr) {
        MenuItem[] menuItemArr2 = menuItemArr != null ? new MenuItem[menuItemArr.length] : null;
        int addIntentOptions = this.f14710c.addIntentOptions(i5, i6, i10, componentName, intentArr, intent, i11, menuItemArr2);
        if (menuItemArr2 != null) {
            int length = menuItemArr2.length;
            for (int i12 = 0; i12 < length; i12++) {
                menuItemArr[i12] = h(menuItemArr2[i12]);
            }
        }
        return addIntentOptions;
    }

    @Override // android.view.Menu
    public final SubMenu addSubMenu(CharSequence charSequence) {
        return this.f14710c.addSubMenu(0, 0, 0, charSequence);
    }

    @Override // android.view.Menu
    public final void clear() {
        SimpleArrayMap simpleArrayMap = (SimpleArrayMap) this.f9324b;
        if (simpleArrayMap != null) {
            simpleArrayMap.clear();
        }
        this.f14710c.clear();
    }

    @Override // android.view.Menu
    public final void close() {
        this.f14710c.close();
    }

    @Override // android.view.Menu
    public final MenuItem findItem(int i5) {
        return h(this.f14710c.findItem(i5));
    }

    @Override // android.view.Menu
    public final MenuItem getItem(int i5) {
        return h(this.f14710c.getItem(i5));
    }

    @Override // android.view.Menu
    public final boolean hasVisibleItems() {
        return this.f14710c.hasVisibleItems();
    }

    @Override // android.view.Menu
    public final boolean isShortcutKey(int i5, KeyEvent keyEvent) {
        return this.f14710c.isShortcutKey(i5, keyEvent);
    }

    @Override // android.view.Menu
    public final boolean performIdentifierAction(int i5, int i6) {
        return this.f14710c.performIdentifierAction(i5, i6);
    }

    @Override // android.view.Menu
    public final boolean performShortcut(int i5, KeyEvent keyEvent, int i6) {
        return this.f14710c.performShortcut(i5, keyEvent, i6);
    }

    @Override // android.view.Menu
    public final void removeGroup(int i5) {
        if (((SimpleArrayMap) this.f9324b) != null) {
            int i6 = 0;
            while (true) {
                SimpleArrayMap simpleArrayMap = (SimpleArrayMap) this.f9324b;
                if (i6 >= simpleArrayMap.f1208i) {
                    break;
                }
                if (((d1.a) simpleArrayMap.f(i6)).getGroupId() == i5) {
                    ((SimpleArrayMap) this.f9324b).g(i6);
                    i6--;
                }
                i6++;
            }
        }
        this.f14710c.removeGroup(i5);
    }

    @Override // android.view.Menu
    public final void removeItem(int i5) {
        if (((SimpleArrayMap) this.f9324b) != null) {
            int i6 = 0;
            while (true) {
                SimpleArrayMap simpleArrayMap = (SimpleArrayMap) this.f9324b;
                if (i6 >= simpleArrayMap.f1208i) {
                    break;
                }
                if (((d1.a) simpleArrayMap.f(i6)).getItemId() == i5) {
                    ((SimpleArrayMap) this.f9324b).g(i6);
                    break;
                }
                i6++;
            }
        }
        this.f14710c.removeItem(i5);
    }

    @Override // android.view.Menu
    public final void setGroupCheckable(int i5, boolean z5, boolean z6) {
        this.f14710c.setGroupCheckable(i5, z5, z6);
    }

    @Override // android.view.Menu
    public final void setGroupEnabled(int i5, boolean z5) {
        this.f14710c.setGroupEnabled(i5, z5);
    }

    @Override // android.view.Menu
    public final void setGroupVisible(int i5, boolean z5) {
        this.f14710c.setGroupVisible(i5, z5);
    }

    @Override // android.view.Menu
    public final void setQwertyMode(boolean z5) {
        this.f14710c.setQwertyMode(z5);
    }

    @Override // android.view.Menu
    public final int size() {
        return this.f14710c.size();
    }

    @Override // android.view.Menu
    public final SubMenu addSubMenu(int i5) {
        return this.f14710c.addSubMenu(i5);
    }

    @Override // android.view.Menu
    public final MenuItem add(int i5) {
        return h(this.f14710c.add(i5));
    }

    @Override // android.view.Menu
    public final SubMenu addSubMenu(int i5, int i6, int i10, CharSequence charSequence) {
        return this.f14710c.addSubMenu(i5, i6, i10, charSequence);
    }

    @Override // android.view.Menu
    public final MenuItem add(int i5, int i6, int i10, CharSequence charSequence) {
        return h(this.f14710c.a(i5, i6, i10, charSequence));
    }

    @Override // android.view.Menu
    public final SubMenu addSubMenu(int i5, int i6, int i10, int i11) {
        return this.f14710c.addSubMenu(i5, i6, i10, i11);
    }

    @Override // android.view.Menu
    public final MenuItem add(int i5, int i6, int i10, int i11) {
        return h(this.f14710c.add(i5, i6, i10, i11));
    }
}
