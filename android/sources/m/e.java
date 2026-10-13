package m;

import android.app.Activity;
import android.content.Context;
import android.content.ContextWrapper;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.content.res.XmlResourceParser;
import android.util.AttributeSet;
import android.util.Log;
import android.util.Xml;
import android.view.InflateException;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.SubMenu;
import androidx.appcompat.widget.n1;
import androidx.recyclerview.widget.RecyclerView;
import java.io.IOException;
import n.m;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;

/* loaded from: classes.dex */
public final class e extends MenuInflater {

    /* renamed from: e, reason: collision with root package name */
    public static final Class[] f14298e;

    /* renamed from: f, reason: collision with root package name */
    public static final Class[] f14299f;
    public final Object[] a;

    /* renamed from: b, reason: collision with root package name */
    public final Object[] f14300b;

    /* renamed from: c, reason: collision with root package name */
    public final Context f14301c;

    /* renamed from: d, reason: collision with root package name */
    public Object f14302d;

    static {
        Class[] clsArr = {Context.class};
        f14298e = clsArr;
        f14299f = clsArr;
    }

    public e(Context context) {
        super(context);
        this.f14301c = context;
        Object[] objArr = {context};
        this.a = objArr;
        this.f14300b = objArr;
    }

    public static Object a(Object obj) {
        return obj instanceof Activity ? obj : obj instanceof ContextWrapper ? a(((ContextWrapper) obj).getBaseContext()) : obj;
    }

    public final void b(XmlPullParser xmlPullParser, AttributeSet attributeSet, Menu menu) {
        int i5;
        XmlPullParser xmlPullParser2;
        ColorStateList colorStateList;
        int resourceId;
        d dVar = new d(this, menu);
        int eventType = xmlPullParser.getEventType();
        while (true) {
            i5 = 2;
            if (eventType == 2) {
                String name = xmlPullParser.getName();
                if (!name.equals("menu")) {
                    throw new RuntimeException("Expecting menu, got ".concat(name));
                }
                eventType = xmlPullParser.next();
            } else {
                eventType = xmlPullParser.next();
                if (eventType == 1) {
                    break;
                }
            }
        }
        boolean z5 = false;
        boolean z6 = false;
        String str = null;
        while (!z5) {
            if (eventType == 1) {
                throw new RuntimeException("Unexpected end of document");
            }
            if (eventType != i5) {
                if (eventType == 3) {
                    String name2 = xmlPullParser.getName();
                    if (z6 && name2.equals(str)) {
                        xmlPullParser2 = xmlPullParser;
                        z6 = false;
                        str = null;
                        eventType = xmlPullParser2.next();
                        i5 = 2;
                        z5 = z5;
                        z6 = z6;
                    } else if (name2.equals("group")) {
                        dVar.f14275b = 0;
                        dVar.f14276c = 0;
                        dVar.f14277d = 0;
                        dVar.f14278e = 0;
                        dVar.f14279f = true;
                        dVar.f14280g = true;
                    } else if (name2.equals("item")) {
                        if (!dVar.f14281h) {
                            m mVar = dVar.f14297z;
                            if (mVar == null || !mVar.f14694b.hasSubMenu()) {
                                dVar.f14281h = true;
                                dVar.b(dVar.a.add(dVar.f14275b, dVar.f14282i, dVar.j, dVar.k));
                            } else {
                                dVar.f14281h = true;
                                dVar.b(dVar.a.addSubMenu(dVar.f14275b, dVar.f14282i, dVar.j, dVar.k).getItem());
                            }
                        }
                    } else if (name2.equals("menu")) {
                        xmlPullParser2 = xmlPullParser;
                        z5 = true;
                    }
                }
                xmlPullParser2 = xmlPullParser;
                z5 = z5;
            } else {
                if (!z6) {
                    String name3 = xmlPullParser.getName();
                    boolean equals = name3.equals("group");
                    Context context = this.f14301c;
                    if (equals) {
                        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, h.a.f9458p);
                        dVar.f14275b = obtainStyledAttributes.getResourceId(1, 0);
                        dVar.f14276c = obtainStyledAttributes.getInt(3, 0);
                        dVar.f14277d = obtainStyledAttributes.getInt(4, 0);
                        dVar.f14278e = obtainStyledAttributes.getInt(5, 0);
                        dVar.f14279f = obtainStyledAttributes.getBoolean(2, true);
                        dVar.f14280g = obtainStyledAttributes.getBoolean(0, true);
                        obtainStyledAttributes.recycle();
                    } else {
                        if (name3.equals("item")) {
                            TypedArray obtainStyledAttributes2 = context.obtainStyledAttributes(attributeSet, h.a.f9459q);
                            dVar.f14282i = obtainStyledAttributes2.getResourceId(2, 0);
                            dVar.j = (obtainStyledAttributes2.getInt(5, dVar.f14276c) & (-65536)) | (obtainStyledAttributes2.getInt(6, dVar.f14277d) & 65535);
                            dVar.k = obtainStyledAttributes2.getText(7);
                            dVar.f14283l = obtainStyledAttributes2.getText(8);
                            dVar.f14284m = obtainStyledAttributes2.getResourceId(0, 0);
                            String string = obtainStyledAttributes2.getString(9);
                            dVar.f14285n = string == null ? (char) 0 : string.charAt(0);
                            dVar.f14286o = obtainStyledAttributes2.getInt(16, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT);
                            String string2 = obtainStyledAttributes2.getString(10);
                            dVar.f14287p = string2 == null ? (char) 0 : string2.charAt(0);
                            dVar.f14288q = obtainStyledAttributes2.getInt(20, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT);
                            if (obtainStyledAttributes2.hasValue(11)) {
                                dVar.f14289r = obtainStyledAttributes2.getBoolean(11, false) ? 1 : 0;
                            } else {
                                dVar.f14289r = dVar.f14278e;
                            }
                            dVar.f14290s = obtainStyledAttributes2.getBoolean(3, false);
                            dVar.f14291t = obtainStyledAttributes2.getBoolean(4, dVar.f14279f);
                            dVar.f14292u = obtainStyledAttributes2.getBoolean(1, dVar.f14280g);
                            dVar.f14293v = obtainStyledAttributes2.getInt(21, -1);
                            dVar.f14296y = obtainStyledAttributes2.getString(12);
                            dVar.f14294w = obtainStyledAttributes2.getResourceId(13, 0);
                            dVar.f14295x = obtainStyledAttributes2.getString(15);
                            String string3 = obtainStyledAttributes2.getString(14);
                            boolean z7 = string3 != null;
                            if (z7 && dVar.f14294w == 0 && dVar.f14295x == null) {
                                dVar.f14297z = (m) dVar.a(string3, f14299f, this.f14300b);
                            } else {
                                if (z7) {
                                    Log.w("SupportMenuInflater", "Ignoring attribute 'actionProviderClass'. Action view already specified.");
                                }
                                dVar.f14297z = null;
                            }
                            dVar.A = obtainStyledAttributes2.getText(17);
                            dVar.B = obtainStyledAttributes2.getText(22);
                            if (obtainStyledAttributes2.hasValue(19)) {
                                dVar.D = n1.c(obtainStyledAttributes2.getInt(19, -1), dVar.D);
                            } else {
                                dVar.D = null;
                            }
                            if (obtainStyledAttributes2.hasValue(18)) {
                                if (!obtainStyledAttributes2.hasValue(18) || (resourceId = obtainStyledAttributes2.getResourceId(18, 0)) == 0 || (colorStateList = y0.b.c(context, resourceId)) == null) {
                                    colorStateList = obtainStyledAttributes2.getColorStateList(18);
                                }
                                dVar.C = colorStateList;
                            } else {
                                dVar.C = null;
                            }
                            obtainStyledAttributes2.recycle();
                            dVar.f14281h = false;
                            xmlPullParser2 = xmlPullParser;
                        } else if (name3.equals("menu")) {
                            dVar.f14281h = true;
                            SubMenu addSubMenu = dVar.a.addSubMenu(dVar.f14275b, dVar.f14282i, dVar.j, dVar.k);
                            dVar.b(addSubMenu.getItem());
                            xmlPullParser2 = xmlPullParser;
                            b(xmlPullParser2, attributeSet, addSubMenu);
                        } else {
                            xmlPullParser2 = xmlPullParser;
                            str = name3;
                            z6 = true;
                        }
                        eventType = xmlPullParser2.next();
                        i5 = 2;
                        z5 = z5;
                        z6 = z6;
                    }
                }
                xmlPullParser2 = xmlPullParser;
                z5 = z5;
            }
            eventType = xmlPullParser2.next();
            i5 = 2;
            z5 = z5;
            z6 = z6;
        }
    }

    @Override // android.view.MenuInflater
    public final void inflate(int i5, Menu menu) {
        if (!(menu instanceof n.j)) {
            super.inflate(i5, menu);
            return;
        }
        XmlResourceParser xmlResourceParser = null;
        boolean z5 = false;
        try {
            try {
                xmlResourceParser = this.f14301c.getResources().getLayout(i5);
                AttributeSet asAttributeSet = Xml.asAttributeSet(xmlResourceParser);
                if (menu instanceof n.j) {
                    n.j jVar = (n.j) menu;
                    if (!jVar.f14659p) {
                        jVar.w();
                        z5 = true;
                    }
                }
                b(xmlResourceParser, asAttributeSet, menu);
                if (z5) {
                    ((n.j) menu).v();
                }
                xmlResourceParser.close();
            } catch (IOException e9) {
                throw new InflateException("Error inflating menu XML", e9);
            } catch (XmlPullParserException e10) {
                throw new InflateException("Error inflating menu XML", e10);
            }
        } catch (Throwable th2) {
            if (z5) {
                ((n.j) menu).v();
            }
            if (xmlResourceParser != null) {
                xmlResourceParser.close();
            }
            throw th2;
        }
    }
}
