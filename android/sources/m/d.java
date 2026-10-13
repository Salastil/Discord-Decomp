package m;

import android.content.Context;
import android.content.res.ColorStateList;
import android.graphics.PorterDuff;
import android.os.Build;
import android.util.Log;
import android.view.InflateException;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import java.lang.reflect.Constructor;
import n.l;
import n.m;
import n.q;

/* loaded from: classes.dex */
public final class d {
    public CharSequence A;
    public CharSequence B;
    public final /* synthetic */ e E;
    public final Menu a;

    /* renamed from: h, reason: collision with root package name */
    public boolean f14281h;

    /* renamed from: i, reason: collision with root package name */
    public int f14282i;
    public int j;
    public CharSequence k;

    /* renamed from: l, reason: collision with root package name */
    public CharSequence f14283l;

    /* renamed from: m, reason: collision with root package name */
    public int f14284m;

    /* renamed from: n, reason: collision with root package name */
    public char f14285n;

    /* renamed from: o, reason: collision with root package name */
    public int f14286o;

    /* renamed from: p, reason: collision with root package name */
    public char f14287p;

    /* renamed from: q, reason: collision with root package name */
    public int f14288q;

    /* renamed from: r, reason: collision with root package name */
    public int f14289r;

    /* renamed from: s, reason: collision with root package name */
    public boolean f14290s;

    /* renamed from: t, reason: collision with root package name */
    public boolean f14291t;

    /* renamed from: u, reason: collision with root package name */
    public boolean f14292u;

    /* renamed from: v, reason: collision with root package name */
    public int f14293v;

    /* renamed from: w, reason: collision with root package name */
    public int f14294w;

    /* renamed from: x, reason: collision with root package name */
    public String f14295x;

    /* renamed from: y, reason: collision with root package name */
    public String f14296y;

    /* renamed from: z, reason: collision with root package name */
    public m f14297z;
    public ColorStateList C = null;
    public PorterDuff.Mode D = null;

    /* renamed from: b, reason: collision with root package name */
    public int f14275b = 0;

    /* renamed from: c, reason: collision with root package name */
    public int f14276c = 0;

    /* renamed from: d, reason: collision with root package name */
    public int f14277d = 0;

    /* renamed from: e, reason: collision with root package name */
    public int f14278e = 0;

    /* renamed from: f, reason: collision with root package name */
    public boolean f14279f = true;

    /* renamed from: g, reason: collision with root package name */
    public boolean f14280g = true;

    public d(e eVar, Menu menu) {
        this.E = eVar;
        this.a = menu;
    }

    public final Object a(String str, Class[] clsArr, Object[] objArr) {
        try {
            Constructor<?> constructor = Class.forName(str, false, this.E.f14301c.getClassLoader()).getConstructor(clsArr);
            constructor.setAccessible(true);
            return constructor.newInstance(objArr);
        } catch (Exception e9) {
            Log.w("SupportMenuInflater", "Cannot instantiate class: " + str, e9);
            return null;
        }
    }

    public final void b(MenuItem menuItem) {
        e eVar = this.E;
        Context context = eVar.f14301c;
        boolean z5 = false;
        menuItem.setChecked(this.f14290s).setVisible(this.f14291t).setEnabled(this.f14292u).setCheckable(this.f14289r >= 1).setTitleCondensed(this.f14283l).setIcon(this.f14284m);
        int i5 = this.f14293v;
        if (i5 >= 0) {
            menuItem.setShowAsAction(i5);
        }
        if (this.f14296y != null) {
            if (context.isRestricted()) {
                throw new IllegalStateException("The android:onClick attribute cannot be used within a restricted context");
            }
            if (eVar.f14302d == null) {
                eVar.f14302d = e.a(context);
            }
            Object obj = eVar.f14302d;
            String str = this.f14296y;
            c cVar = new c();
            cVar.a = obj;
            Class<?> cls = obj.getClass();
            try {
                cVar.f14274b = cls.getMethod(str, c.f14273c);
                menuItem.setOnMenuItemClickListener(cVar);
            } catch (Exception e9) {
                StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("Couldn't resolve menu item onClick handler ", str, " in class ");
                m5.append(cls.getName());
                InflateException inflateException = new InflateException(m5.toString());
                inflateException.initCause(e9);
                throw inflateException;
            }
        }
        if (this.f14289r >= 2) {
            if (menuItem instanceof l) {
                l lVar = (l) menuItem;
                lVar.f14691x = (lVar.f14691x & (-5)) | 4;
            } else if (menuItem instanceof q) {
                q qVar = (q) menuItem;
                d1.a aVar = qVar.f14698c;
                try {
                    if (qVar.f14699d == null) {
                        qVar.f14699d = aVar.getClass().getDeclaredMethod("setExclusiveCheckable", Boolean.TYPE);
                    }
                    qVar.f14699d.invoke(aVar, Boolean.TRUE);
                } catch (Exception e10) {
                    Log.w("MenuItemWrapper", "Error while calling setExclusiveCheckable", e10);
                }
            }
        }
        String str2 = this.f14295x;
        if (str2 != null) {
            menuItem.setActionView((View) a(str2, e.f14298e, eVar.a));
            z5 = true;
        }
        int i6 = this.f14294w;
        if (i6 > 0) {
            if (z5) {
                Log.w("SupportMenuInflater", "Ignoring attribute 'itemActionViewLayout'. Action view already specified.");
            } else {
                menuItem.setActionView(i6);
            }
        }
        m mVar = this.f14297z;
        if (mVar != null) {
            if (menuItem instanceof d1.a) {
                ((d1.a) menuItem).b(mVar);
            } else {
                Log.w("MenuItemCompat", "setActionProvider: item does not implement SupportMenuItem; ignoring");
            }
        }
        CharSequence charSequence = this.A;
        boolean z6 = menuItem instanceof d1.a;
        if (z6) {
            ((d1.a) menuItem).setContentDescription(charSequence);
        } else if (Build.VERSION.SDK_INT >= 26) {
            jf.a.l(menuItem, charSequence);
        }
        CharSequence charSequence2 = this.B;
        if (z6) {
            ((d1.a) menuItem).setTooltipText(charSequence2);
        } else if (Build.VERSION.SDK_INT >= 26) {
            jf.a.q(menuItem, charSequence2);
        }
        char c6 = this.f14285n;
        int i10 = this.f14286o;
        if (z6) {
            ((d1.a) menuItem).setAlphabeticShortcut(c6, i10);
        } else if (Build.VERSION.SDK_INT >= 26) {
            jf.a.k(menuItem, c6, i10);
        }
        char c8 = this.f14287p;
        int i11 = this.f14288q;
        if (z6) {
            ((d1.a) menuItem).setNumericShortcut(c8, i11);
        } else if (Build.VERSION.SDK_INT >= 26) {
            jf.a.p(menuItem, c8, i11);
        }
        PorterDuff.Mode mode = this.D;
        if (mode != null) {
            if (z6) {
                ((d1.a) menuItem).setIconTintMode(mode);
            } else if (Build.VERSION.SDK_INT >= 26) {
                jf.a.o(menuItem, mode);
            }
        }
        ColorStateList colorStateList = this.C;
        if (colorStateList != null) {
            if (z6) {
                ((d1.a) menuItem).setIconTintList(colorStateList);
            } else if (Build.VERSION.SDK_INT >= 26) {
                jf.a.n(menuItem, colorStateList);
            }
        }
    }
}
