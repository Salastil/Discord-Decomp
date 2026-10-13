package v0;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Rect;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import java.lang.reflect.Constructor;
import java.util.HashMap;
import java.util.Map;

/* loaded from: classes.dex */
public final class d extends ViewGroup.MarginLayoutParams {
    public b a;

    /* renamed from: b, reason: collision with root package name */
    public boolean f19133b;

    /* renamed from: c, reason: collision with root package name */
    public final int f19134c;

    /* renamed from: d, reason: collision with root package name */
    public final int f19135d;

    /* renamed from: e, reason: collision with root package name */
    public final int f19136e;

    /* renamed from: f, reason: collision with root package name */
    public final int f19137f;

    /* renamed from: g, reason: collision with root package name */
    public final int f19138g;

    /* renamed from: h, reason: collision with root package name */
    public int f19139h;

    /* renamed from: i, reason: collision with root package name */
    public int f19140i;
    public int j;
    public View k;

    /* renamed from: l, reason: collision with root package name */
    public View f19141l;

    /* renamed from: m, reason: collision with root package name */
    public boolean f19142m;

    /* renamed from: n, reason: collision with root package name */
    public boolean f19143n;

    /* renamed from: o, reason: collision with root package name */
    public boolean f19144o;

    /* renamed from: p, reason: collision with root package name */
    public final Rect f19145p;

    public d(int i5, int i6) {
        super(i5, i6);
        this.f19133b = false;
        this.f19134c = 0;
        this.f19135d = 0;
        this.f19136e = -1;
        this.f19137f = -1;
        this.f19138g = 0;
        this.f19139h = 0;
        this.f19145p = new Rect();
    }

    public final boolean a(int i5) {
        if (i5 == 0) {
            return this.f19142m;
        }
        if (i5 != 1) {
            return false;
        }
        return this.f19143n;
    }

    public final void b(b bVar) {
        b bVar2 = this.a;
        if (bVar2 != bVar) {
            if (bVar2 != null) {
                bVar2.j();
            }
            this.a = bVar;
            this.f19133b = true;
            if (bVar != null) {
                bVar.g(this);
            }
        }
    }

    public d(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        b bVar;
        this.f19133b = false;
        this.f19134c = 0;
        this.f19135d = 0;
        this.f19136e = -1;
        this.f19137f = -1;
        this.f19138g = 0;
        this.f19139h = 0;
        this.f19145p = new Rect();
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, u0.a.f18776b);
        this.f19134c = obtainStyledAttributes.getInteger(0, 0);
        this.f19137f = obtainStyledAttributes.getResourceId(1, -1);
        this.f19135d = obtainStyledAttributes.getInteger(2, 0);
        this.f19136e = obtainStyledAttributes.getInteger(6, -1);
        this.f19138g = obtainStyledAttributes.getInt(5, 0);
        this.f19139h = obtainStyledAttributes.getInt(4, 0);
        boolean hasValue = obtainStyledAttributes.hasValue(3);
        this.f19133b = hasValue;
        if (hasValue) {
            String string = obtainStyledAttributes.getString(3);
            String str = CoordinatorLayout.P;
            if (TextUtils.isEmpty(string)) {
                bVar = null;
            } else {
                if (string.startsWith(".")) {
                    string = context.getPackageName() + string;
                } else if (string.indexOf(46) < 0) {
                    String str2 = CoordinatorLayout.P;
                    if (!TextUtils.isEmpty(str2)) {
                        string = str2 + '.' + string;
                    }
                }
                try {
                    ThreadLocal threadLocal = CoordinatorLayout.R;
                    Map map = (Map) threadLocal.get();
                    if (map == null) {
                        map = new HashMap();
                        threadLocal.set(map);
                    }
                    Constructor<?> constructor = (Constructor) map.get(string);
                    if (constructor == null) {
                        constructor = Class.forName(string, false, context.getClassLoader()).getConstructor(CoordinatorLayout.Q);
                        constructor.setAccessible(true);
                        map.put(string, constructor);
                    }
                    bVar = (b) constructor.newInstance(context, attributeSet);
                } catch (Exception e9) {
                    throw new RuntimeException(a3.e.k("Could not inflate Behavior subclass ", string), e9);
                }
            }
            this.a = bVar;
        }
        obtainStyledAttributes.recycle();
        b bVar2 = this.a;
        if (bVar2 != null) {
            bVar2.g(this);
        }
    }

    public d(d dVar) {
        super((ViewGroup.MarginLayoutParams) dVar);
        this.f19133b = false;
        this.f19134c = 0;
        this.f19135d = 0;
        this.f19136e = -1;
        this.f19137f = -1;
        this.f19138g = 0;
        this.f19139h = 0;
        this.f19145p = new Rect();
    }

    public d(ViewGroup.MarginLayoutParams marginLayoutParams) {
        super(marginLayoutParams);
        this.f19133b = false;
        this.f19134c = 0;
        this.f19135d = 0;
        this.f19136e = -1;
        this.f19137f = -1;
        this.f19138g = 0;
        this.f19139h = 0;
        this.f19145p = new Rect();
    }

    public d(ViewGroup.LayoutParams layoutParams) {
        super(layoutParams);
        this.f19133b = false;
        this.f19134c = 0;
        this.f19135d = 0;
        this.f19136e = -1;
        this.f19137f = -1;
        this.f19138g = 0;
        this.f19139h = 0;
        this.f19145p = new Rect();
    }
}
