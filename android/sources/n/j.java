package n;

import android.content.ActivityNotFoundException;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.content.res.Resources;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Bundle;
import android.os.Parcelable;
import android.util.Log;
import android.util.SparseArray;
import android.view.KeyCharacterMap;
import android.view.KeyEvent;
import android.view.Menu;
import android.view.MenuItem;
import android.view.SubMenu;
import android.view.View;
import android.view.ViewConfiguration;
import androidx.core.view.t0;
import java.lang.ref.WeakReference;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

/* loaded from: classes.dex */
public class j implements Menu {

    /* renamed from: y, reason: collision with root package name */
    public static final int[] f14646y = {1, 4, 5, 3, 2, 0};
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final Resources f14647b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f14648c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f14649d;

    /* renamed from: e, reason: collision with root package name */
    public h f14650e;

    /* renamed from: f, reason: collision with root package name */
    public final ArrayList f14651f;

    /* renamed from: g, reason: collision with root package name */
    public final ArrayList f14652g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f14653h;

    /* renamed from: i, reason: collision with root package name */
    public final ArrayList f14654i;
    public final ArrayList j;
    public boolean k;

    /* renamed from: m, reason: collision with root package name */
    public CharSequence f14656m;

    /* renamed from: n, reason: collision with root package name */
    public Drawable f14657n;

    /* renamed from: o, reason: collision with root package name */
    public View f14658o;

    /* renamed from: v, reason: collision with root package name */
    public l f14665v;

    /* renamed from: x, reason: collision with root package name */
    public boolean f14667x;

    /* renamed from: l, reason: collision with root package name */
    public int f14655l = 0;

    /* renamed from: p, reason: collision with root package name */
    public boolean f14659p = false;

    /* renamed from: q, reason: collision with root package name */
    public boolean f14660q = false;

    /* renamed from: r, reason: collision with root package name */
    public boolean f14661r = false;

    /* renamed from: s, reason: collision with root package name */
    public boolean f14662s = false;

    /* renamed from: t, reason: collision with root package name */
    public final ArrayList f14663t = new ArrayList();

    /* renamed from: u, reason: collision with root package name */
    public final CopyOnWriteArrayList f14664u = new CopyOnWriteArrayList();

    /* renamed from: w, reason: collision with root package name */
    public boolean f14666w = false;

    public j(Context context) {
        boolean z5;
        boolean z6 = false;
        this.a = context;
        Resources resources = context.getResources();
        this.f14647b = resources;
        this.f14651f = new ArrayList();
        this.f14652g = new ArrayList();
        this.f14653h = true;
        this.f14654i = new ArrayList();
        this.j = new ArrayList();
        this.k = true;
        if (resources.getConfiguration().keyboard != 1) {
            ViewConfiguration viewConfiguration = ViewConfiguration.get(context);
            Method method = t0.a;
            if (Build.VERSION.SDK_INT >= 28) {
                z5 = androidx.core.view.h.w(viewConfiguration);
            } else {
                Resources resources2 = context.getResources();
                int identifier = resources2.getIdentifier("config_showMenuShortcutsWhenKeyboardPresent", "bool", "android");
                z5 = identifier != 0 && resources2.getBoolean(identifier);
            }
            if (z5) {
                z6 = true;
            }
        }
        this.f14649d = z6;
    }

    public l a(int i5, int i6, int i10, CharSequence charSequence) {
        int i11;
        int i12 = ((-65536) & i10) >> 16;
        if (i12 < 0 || i12 >= 6) {
            throw new IllegalArgumentException("order does not contain a valid category.");
        }
        int i13 = (f14646y[i12] << 16) | (65535 & i10);
        l lVar = new l(this, i5, i6, i10, i13, charSequence, this.f14655l);
        ArrayList arrayList = this.f14651f;
        int size = arrayList.size() - 1;
        while (true) {
            if (size < 0) {
                i11 = 0;
                break;
            }
            if (((l) arrayList.get(size)).f14673d <= i13) {
                i11 = size + 1;
                break;
            }
            size--;
        }
        arrayList.add(i11, lVar);
        p(true);
        return lVar;
    }

    @Override // android.view.Menu
    public final MenuItem add(CharSequence charSequence) {
        return a(0, 0, 0, charSequence);
    }

    @Override // android.view.Menu
    public final int addIntentOptions(int i5, int i6, int i10, ComponentName componentName, Intent[] intentArr, Intent intent, int i11, MenuItem[] menuItemArr) {
        int i12;
        PackageManager packageManager = this.a.getPackageManager();
        List<ResolveInfo> queryIntentActivityOptions = packageManager.queryIntentActivityOptions(componentName, intentArr, intent, 0);
        int size = queryIntentActivityOptions != null ? queryIntentActivityOptions.size() : 0;
        if ((i11 & 1) == 0) {
            removeGroup(i5);
        }
        for (int i13 = 0; i13 < size; i13++) {
            ResolveInfo resolveInfo = queryIntentActivityOptions.get(i13);
            int i14 = resolveInfo.specificIndex;
            Intent intent2 = new Intent(i14 < 0 ? intent : intentArr[i14]);
            ActivityInfo activityInfo = resolveInfo.activityInfo;
            intent2.setComponent(new ComponentName(activityInfo.applicationInfo.packageName, activityInfo.name));
            l a = a(i5, i6, i10, resolveInfo.loadLabel(packageManager));
            a.setIcon(resolveInfo.loadIcon(packageManager));
            a.f14676g = intent2;
            if (menuItemArr != null && (i12 = resolveInfo.specificIndex) >= 0) {
                menuItemArr[i12] = a;
            }
        }
        return size;
    }

    @Override // android.view.Menu
    public final SubMenu addSubMenu(CharSequence charSequence) {
        return addSubMenu(0, 0, 0, charSequence);
    }

    public final void b(v vVar, Context context) {
        this.f14664u.add(new WeakReference(vVar));
        vVar.c(context, this);
        this.k = true;
    }

    public final void c(boolean z5) {
        if (this.f14662s) {
            return;
        }
        this.f14662s = true;
        CopyOnWriteArrayList copyOnWriteArrayList = this.f14664u;
        Iterator it = copyOnWriteArrayList.iterator();
        while (it.hasNext()) {
            WeakReference weakReference = (WeakReference) it.next();
            v vVar = (v) weakReference.get();
            if (vVar == null) {
                copyOnWriteArrayList.remove(weakReference);
            } else {
                vVar.b(this, z5);
            }
        }
        this.f14662s = false;
    }

    @Override // android.view.Menu
    public final void clear() {
        l lVar = this.f14665v;
        if (lVar != null) {
            d(lVar);
        }
        this.f14651f.clear();
        p(true);
    }

    public final void clearHeader() {
        this.f14657n = null;
        this.f14656m = null;
        this.f14658o = null;
        p(false);
    }

    @Override // android.view.Menu
    public final void close() {
        c(true);
    }

    public boolean d(l lVar) {
        CopyOnWriteArrayList copyOnWriteArrayList = this.f14664u;
        boolean z5 = false;
        if (!copyOnWriteArrayList.isEmpty() && this.f14665v == lVar) {
            w();
            Iterator it = copyOnWriteArrayList.iterator();
            while (it.hasNext()) {
                WeakReference weakReference = (WeakReference) it.next();
                v vVar = (v) weakReference.get();
                if (vVar == null) {
                    copyOnWriteArrayList.remove(weakReference);
                } else {
                    z5 = vVar.k(lVar);
                    if (z5) {
                        break;
                    }
                }
            }
            v();
            if (z5) {
                this.f14665v = null;
            }
        }
        return z5;
    }

    public boolean e(j jVar, MenuItem menuItem) {
        h hVar = this.f14650e;
        return hVar != null && hVar.i(jVar, menuItem);
    }

    public boolean f(l lVar) {
        CopyOnWriteArrayList copyOnWriteArrayList = this.f14664u;
        boolean z5 = false;
        if (copyOnWriteArrayList.isEmpty()) {
            return false;
        }
        w();
        Iterator it = copyOnWriteArrayList.iterator();
        while (it.hasNext()) {
            WeakReference weakReference = (WeakReference) it.next();
            v vVar = (v) weakReference.get();
            if (vVar == null) {
                copyOnWriteArrayList.remove(weakReference);
            } else {
                z5 = vVar.g(lVar);
                if (z5) {
                    break;
                }
            }
        }
        v();
        if (z5) {
            this.f14665v = lVar;
        }
        return z5;
    }

    @Override // android.view.Menu
    public final MenuItem findItem(int i5) {
        MenuItem findItem;
        ArrayList arrayList = this.f14651f;
        int size = arrayList.size();
        for (int i6 = 0; i6 < size; i6++) {
            l lVar = (l) arrayList.get(i6);
            if (lVar.a == i5) {
                return lVar;
            }
            if (lVar.hasSubMenu() && (findItem = lVar.f14682o.findItem(i5)) != null) {
                return findItem;
            }
        }
        return null;
    }

    public final l g(int i5, KeyEvent keyEvent) {
        ArrayList arrayList = this.f14663t;
        arrayList.clear();
        h(arrayList, i5, keyEvent);
        if (arrayList.isEmpty()) {
            return null;
        }
        int metaState = keyEvent.getMetaState();
        KeyCharacterMap.KeyData keyData = new KeyCharacterMap.KeyData();
        keyEvent.getKeyData(keyData);
        int size = arrayList.size();
        if (size == 1) {
            return (l) arrayList.get(0);
        }
        boolean n6 = n();
        for (int i6 = 0; i6 < size; i6++) {
            l lVar = (l) arrayList.get(i6);
            char c6 = n6 ? lVar.j : lVar.f14677h;
            char[] cArr = keyData.meta;
            if ((c6 == cArr[0] && (metaState & 2) == 0) || ((c6 == cArr[2] && (metaState & 2) != 0) || (n6 && c6 == '\b' && i5 == 67))) {
                return lVar;
            }
        }
        return null;
    }

    @Override // android.view.Menu
    public final MenuItem getItem(int i5) {
        return (MenuItem) this.f14651f.get(i5);
    }

    public final void h(List list, int i5, KeyEvent keyEvent) {
        boolean n6 = n();
        int modifiers = keyEvent.getModifiers();
        KeyCharacterMap.KeyData keyData = new KeyCharacterMap.KeyData();
        if (keyEvent.getKeyData(keyData) || i5 == 67) {
            ArrayList arrayList = this.f14651f;
            int size = arrayList.size();
            for (int i6 = 0; i6 < size; i6++) {
                l lVar = (l) arrayList.get(i6);
                if (lVar.hasSubMenu()) {
                    lVar.f14682o.h(list, i5, keyEvent);
                }
                char c6 = n6 ? lVar.j : lVar.f14677h;
                if ((modifiers & 69647) == ((n6 ? lVar.k : lVar.f14678i) & 69647) && c6 != 0) {
                    char[] cArr = keyData.meta;
                    if ((c6 == cArr[0] || c6 == cArr[2] || (n6 && c6 == '\b' && i5 == 67)) && lVar.isEnabled()) {
                        list.add(lVar);
                    }
                }
            }
        }
    }

    @Override // android.view.Menu
    public final boolean hasVisibleItems() {
        if (this.f14667x) {
            return true;
        }
        ArrayList arrayList = this.f14651f;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            if (((l) arrayList.get(i5)).isVisible()) {
                return true;
            }
        }
        return false;
    }

    public final void i() {
        ArrayList l6 = l();
        if (this.k) {
            CopyOnWriteArrayList copyOnWriteArrayList = this.f14664u;
            Iterator it = copyOnWriteArrayList.iterator();
            boolean z5 = false;
            while (it.hasNext()) {
                WeakReference weakReference = (WeakReference) it.next();
                v vVar = (v) weakReference.get();
                if (vVar == null) {
                    copyOnWriteArrayList.remove(weakReference);
                } else {
                    z5 |= vVar.e();
                }
            }
            ArrayList arrayList = this.f14654i;
            ArrayList arrayList2 = this.j;
            if (z5) {
                arrayList.clear();
                arrayList2.clear();
                int size = l6.size();
                for (int i5 = 0; i5 < size; i5++) {
                    l lVar = (l) l6.get(i5);
                    if ((lVar.f14691x & 32) == 32) {
                        arrayList.add(lVar);
                    } else {
                        arrayList2.add(lVar);
                    }
                }
            } else {
                arrayList.clear();
                arrayList2.clear();
                arrayList2.addAll(l());
            }
            this.k = false;
        }
    }

    @Override // android.view.Menu
    public final boolean isShortcutKey(int i5, KeyEvent keyEvent) {
        return g(i5, keyEvent) != null;
    }

    public String j() {
        return "android:menu:actionviewstates";
    }

    public final ArrayList l() {
        boolean z5 = this.f14653h;
        ArrayList arrayList = this.f14652g;
        if (!z5) {
            return arrayList;
        }
        arrayList.clear();
        ArrayList arrayList2 = this.f14651f;
        int size = arrayList2.size();
        for (int i5 = 0; i5 < size; i5++) {
            l lVar = (l) arrayList2.get(i5);
            if (lVar.isVisible()) {
                arrayList.add(lVar);
            }
        }
        this.f14653h = false;
        this.k = true;
        return arrayList;
    }

    public boolean m() {
        return this.f14666w;
    }

    public boolean n() {
        return this.f14648c;
    }

    public boolean o() {
        return this.f14649d;
    }

    public void p(boolean z5) {
        if (this.f14659p) {
            this.f14660q = true;
            if (z5) {
                this.f14661r = true;
                return;
            }
            return;
        }
        if (z5) {
            this.f14653h = true;
            this.k = true;
        }
        CopyOnWriteArrayList copyOnWriteArrayList = this.f14664u;
        if (copyOnWriteArrayList.isEmpty()) {
            return;
        }
        w();
        Iterator it = copyOnWriteArrayList.iterator();
        while (it.hasNext()) {
            WeakReference weakReference = (WeakReference) it.next();
            v vVar = (v) weakReference.get();
            if (vVar == null) {
                copyOnWriteArrayList.remove(weakReference);
            } else {
                vVar.a(z5);
            }
        }
        v();
    }

    @Override // android.view.Menu
    public final boolean performIdentifierAction(int i5, int i6) {
        return q(findItem(i5), null, i6);
    }

    @Override // android.view.Menu
    public final boolean performShortcut(int i5, KeyEvent keyEvent, int i6) {
        l g6 = g(i5, keyEvent);
        boolean q5 = g6 != null ? q(g6, null, i6) : false;
        if ((i6 & 2) != 0) {
            c(true);
        }
        return q5;
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x0058  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0064  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean q(MenuItem menuItem, v vVar, int i5) {
        boolean z5;
        l lVar = (l) menuItem;
        if (lVar == null || !lVar.isEnabled()) {
            return false;
        }
        j jVar = lVar.f14681n;
        MenuItem.OnMenuItemClickListener onMenuItemClickListener = lVar.f14683p;
        if ((onMenuItemClickListener == null || !onMenuItemClickListener.onMenuItemClick(lVar)) && !jVar.e(jVar, lVar)) {
            Intent intent = lVar.f14676g;
            if (intent != null) {
                try {
                    jVar.a.startActivity(intent);
                } catch (ActivityNotFoundException e9) {
                    Log.e("MenuItemImpl", "Can't find activity to handle intent; ignoring", e9);
                }
            }
            m mVar = lVar.A;
            if (mVar == null || !mVar.f14694b.onPerformDefaultAction()) {
                z5 = false;
                m mVar2 = lVar.A;
                boolean z6 = mVar2 == null && mVar2.f14694b.hasSubMenu();
                if (!lVar.e()) {
                    z5 |= lVar.expandActionView();
                    if (z5) {
                        c(true);
                    }
                } else if (lVar.hasSubMenu() || z6) {
                    if ((i5 & 4) == 0) {
                        c(false);
                    }
                    if (!lVar.hasSubMenu()) {
                        b0 b0Var = new b0(this.a, this, lVar);
                        lVar.f14682o = b0Var;
                        b0Var.setHeaderTitle(lVar.f14674e);
                    }
                    b0 b0Var2 = lVar.f14682o;
                    if (z6) {
                        mVar2.f14694b.onPrepareSubMenu(b0Var2);
                    }
                    CopyOnWriteArrayList copyOnWriteArrayList = this.f14664u;
                    if (!copyOnWriteArrayList.isEmpty()) {
                        r0 = vVar != null ? vVar.d(b0Var2) : false;
                        Iterator it = copyOnWriteArrayList.iterator();
                        while (it.hasNext()) {
                            WeakReference weakReference = (WeakReference) it.next();
                            v vVar2 = (v) weakReference.get();
                            if (vVar2 == null) {
                                copyOnWriteArrayList.remove(weakReference);
                            } else if (!r0) {
                                r0 = vVar2.d(b0Var2);
                            }
                        }
                    }
                    z5 |= r0;
                    if (!z5) {
                        c(true);
                    }
                } else if ((i5 & 1) == 0) {
                    c(true);
                }
                return z5;
            }
        }
        z5 = true;
        m mVar22 = lVar.A;
        if (mVar22 == null) {
        }
        if (!lVar.e()) {
        }
        return z5;
    }

    public final void r(v vVar) {
        CopyOnWriteArrayList copyOnWriteArrayList = this.f14664u;
        Iterator it = copyOnWriteArrayList.iterator();
        while (it.hasNext()) {
            WeakReference weakReference = (WeakReference) it.next();
            v vVar2 = (v) weakReference.get();
            if (vVar2 == null || vVar2 == vVar) {
                copyOnWriteArrayList.remove(weakReference);
            }
        }
    }

    @Override // android.view.Menu
    public final void removeGroup(int i5) {
        ArrayList arrayList = this.f14651f;
        int size = arrayList.size();
        int i6 = 0;
        int i10 = 0;
        while (true) {
            if (i10 >= size) {
                i10 = -1;
                break;
            } else if (((l) arrayList.get(i10)).f14671b == i5) {
                break;
            } else {
                i10++;
            }
        }
        if (i10 >= 0) {
            int size2 = arrayList.size() - i10;
            while (true) {
                int i11 = i6 + 1;
                if (i6 >= size2 || ((l) arrayList.get(i10)).f14671b != i5) {
                    break;
                }
                if (i10 >= 0 && i10 < arrayList.size()) {
                    arrayList.remove(i10);
                }
                i6 = i11;
            }
            p(true);
        }
    }

    @Override // android.view.Menu
    public final void removeItem(int i5) {
        ArrayList arrayList = this.f14651f;
        int size = arrayList.size();
        int i6 = 0;
        while (true) {
            if (i6 >= size) {
                i6 = -1;
                break;
            } else if (((l) arrayList.get(i6)).a == i5) {
                break;
            } else {
                i6++;
            }
        }
        if (i6 < 0 || i6 >= arrayList.size()) {
            return;
        }
        arrayList.remove(i6);
        p(true);
    }

    public final void s(Bundle bundle) {
        MenuItem findItem;
        if (bundle == null) {
            return;
        }
        SparseArray<Parcelable> sparseParcelableArray = bundle.getSparseParcelableArray(j());
        int size = this.f14651f.size();
        for (int i5 = 0; i5 < size; i5++) {
            MenuItem item = getItem(i5);
            View actionView = item.getActionView();
            if (actionView != null && actionView.getId() != -1) {
                actionView.restoreHierarchyState(sparseParcelableArray);
            }
            if (item.hasSubMenu()) {
                ((b0) item.getSubMenu()).s(bundle);
            }
        }
        int i6 = bundle.getInt("android:menu:expandedactionview");
        if (i6 <= 0 || (findItem = findItem(i6)) == null) {
            return;
        }
        findItem.expandActionView();
    }

    @Override // android.view.Menu
    public final void setGroupCheckable(int i5, boolean z5, boolean z6) {
        ArrayList arrayList = this.f14651f;
        int size = arrayList.size();
        for (int i6 = 0; i6 < size; i6++) {
            l lVar = (l) arrayList.get(i6);
            if (lVar.f14671b == i5) {
                lVar.f14691x = (lVar.f14691x & (-5)) | (z6 ? 4 : 0);
                lVar.setCheckable(z5);
            }
        }
    }

    @Override // android.view.Menu
    public void setGroupDividerEnabled(boolean z5) {
        this.f14666w = z5;
    }

    @Override // android.view.Menu
    public final void setGroupEnabled(int i5, boolean z5) {
        ArrayList arrayList = this.f14651f;
        int size = arrayList.size();
        for (int i6 = 0; i6 < size; i6++) {
            l lVar = (l) arrayList.get(i6);
            if (lVar.f14671b == i5) {
                lVar.setEnabled(z5);
            }
        }
    }

    @Override // android.view.Menu
    public final void setGroupVisible(int i5, boolean z5) {
        ArrayList arrayList = this.f14651f;
        int size = arrayList.size();
        boolean z6 = false;
        for (int i6 = 0; i6 < size; i6++) {
            l lVar = (l) arrayList.get(i6);
            if (lVar.f14671b == i5) {
                int i10 = lVar.f14691x;
                int i11 = (i10 & (-9)) | (z5 ? 0 : 8);
                lVar.f14691x = i11;
                if (i10 != i11) {
                    z6 = true;
                }
            }
        }
        if (z6) {
            p(true);
        }
    }

    @Override // android.view.Menu
    public void setQwertyMode(boolean z5) {
        this.f14648c = z5;
        p(false);
    }

    @Override // android.view.Menu
    public final int size() {
        return this.f14651f.size();
    }

    public final void t(Bundle bundle) {
        int size = this.f14651f.size();
        SparseArray<? extends Parcelable> sparseArray = null;
        for (int i5 = 0; i5 < size; i5++) {
            MenuItem item = getItem(i5);
            View actionView = item.getActionView();
            if (actionView != null && actionView.getId() != -1) {
                if (sparseArray == null) {
                    sparseArray = new SparseArray<>();
                }
                actionView.saveHierarchyState(sparseArray);
                if (item.isActionViewExpanded()) {
                    bundle.putInt("android:menu:expandedactionview", item.getItemId());
                }
            }
            if (item.hasSubMenu()) {
                ((b0) item.getSubMenu()).t(bundle);
            }
        }
        if (sparseArray != null) {
            bundle.putSparseParcelableArray(j(), sparseArray);
        }
    }

    public final void u(int i5, CharSequence charSequence, int i6, Drawable drawable, View view) {
        if (view != null) {
            this.f14658o = view;
            this.f14656m = null;
            this.f14657n = null;
        } else {
            if (i5 > 0) {
                this.f14656m = this.f14647b.getText(i5);
            } else if (charSequence != null) {
                this.f14656m = charSequence;
            }
            if (i6 > 0) {
                this.f14657n = this.a.getDrawable(i6);
            } else if (drawable != null) {
                this.f14657n = drawable;
            }
            this.f14658o = null;
        }
        p(false);
    }

    public final void v() {
        this.f14659p = false;
        if (this.f14660q) {
            this.f14660q = false;
            p(this.f14661r);
        }
    }

    public final void w() {
        if (this.f14659p) {
            return;
        }
        this.f14659p = true;
        this.f14660q = false;
        this.f14661r = false;
    }

    @Override // android.view.Menu
    public final MenuItem add(int i5) {
        return a(0, 0, 0, this.f14647b.getString(i5));
    }

    @Override // android.view.Menu
    public final SubMenu addSubMenu(int i5) {
        return addSubMenu(0, 0, 0, this.f14647b.getString(i5));
    }

    @Override // android.view.Menu
    public final MenuItem add(int i5, int i6, int i10, CharSequence charSequence) {
        return a(i5, i6, i10, charSequence);
    }

    @Override // android.view.Menu
    public SubMenu addSubMenu(int i5, int i6, int i10, CharSequence charSequence) {
        l a = a(i5, i6, i10, charSequence);
        b0 b0Var = new b0(this.a, this, a);
        a.f14682o = b0Var;
        b0Var.setHeaderTitle(a.f14674e);
        return b0Var;
    }

    @Override // android.view.Menu
    public final MenuItem add(int i5, int i6, int i10, int i11) {
        return a(i5, i6, i10, this.f14647b.getString(i11));
    }

    @Override // android.view.Menu
    public final SubMenu addSubMenu(int i5, int i6, int i10, int i11) {
        return addSubMenu(i5, i6, i10, this.f14647b.getString(i11));
    }

    public j k() {
        return this;
    }
}
