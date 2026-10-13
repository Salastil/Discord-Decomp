package vd;

import android.util.Pair;
import android.view.Choreographer;
import android.view.View;
import android.view.ViewParent;
import androidx.metrics.performance.FrameData;
import androidx.metrics.performance.JankStats;
import com.discord.R;
import hc.g1;
import java.lang.ref.WeakReference;
import java.util.AbstractList;
import java.util.ArrayList;
import java.util.LinkedList;
import kotlin.jvm.internal.Intrinsics;
import nd.b1;
import org.xmlpull.v1.XmlPullParser;

/* loaded from: classes3.dex */
public abstract class d {

    /* renamed from: e, reason: collision with root package name */
    public static long f19357e = -1;
    public final Object a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f19358b;

    /* renamed from: c, reason: collision with root package name */
    public final Object f19359c;

    /* renamed from: d, reason: collision with root package name */
    public final AbstractList f19360d;

    public d(JankStats jankStats, View view) {
        Intrinsics.checkNotNullParameter(jankStats, "jankStats");
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(jankStats, "jankStats");
        this.a = new WeakReference(view);
        Choreographer choreographer = Choreographer.getInstance();
        Intrinsics.checkNotNullExpressionValue(choreographer, "getInstance()");
        this.f19358b = choreographer;
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(view, "view");
        ViewParent parent = view.getParent();
        while (parent instanceof View) {
            view = parent;
            parent = view.getParent();
        }
        Object tag = view.getTag(R.id.metricsStateHolder);
        if (tag == null) {
            tag = new x2.h();
            view.setTag(R.id.metricsStateHolder, tag);
        }
        this.f19359c = (x2.h) tag;
        ArrayList arrayList = new ArrayList();
        this.f19360d = arrayList;
        new FrameData(arrayList);
    }

    public static int g(XmlPullParser xmlPullParser, String str) {
        String attributeValue = xmlPullParser.getAttributeValue(null, str);
        if (attributeValue == null) {
            return -1;
        }
        try {
            return Integer.parseInt(attributeValue);
        } catch (NumberFormatException e9) {
            throw g1.b(null, e9);
        }
    }

    public static long h(XmlPullParser xmlPullParser, String str, long j) {
        String attributeValue = xmlPullParser.getAttributeValue(null, str);
        if (attributeValue == null) {
            return j;
        }
        try {
            return Long.parseLong(attributeValue);
        } catch (NumberFormatException e9) {
            throw g1.b(null, e9);
        }
    }

    public static int i(XmlPullParser xmlPullParser, String str) {
        String attributeValue = xmlPullParser.getAttributeValue(null, str);
        if (attributeValue == null) {
            throw new b1(str, 2);
        }
        try {
            return Integer.parseInt(attributeValue);
        } catch (NumberFormatException e9) {
            throw g1.b(null, e9);
        }
    }

    public abstract Object b();

    public Object c(String str) {
        LinkedList linkedList = (LinkedList) this.f19360d;
        for (int i5 = 0; i5 < linkedList.size(); i5++) {
            Pair pair = (Pair) linkedList.get(i5);
            if (((String) pair.first).equals(str)) {
                return pair.second;
            }
        }
        d dVar = (d) this.f19359c;
        if (dVar == null) {
            return null;
        }
        return dVar.c(str);
    }

    public boolean d(String str) {
        return false;
    }

    public Object e(XmlPullParser xmlPullParser) {
        boolean z5 = false;
        int i5 = 0;
        while (true) {
            int eventType = xmlPullParser.getEventType();
            d dVar = null;
            if (eventType == 1) {
                return null;
            }
            if (eventType == 2) {
                String name = xmlPullParser.getName();
                if (((String) this.f19358b).equals(name)) {
                    j(xmlPullParser);
                    z5 = true;
                } else if (z5) {
                    if (i5 > 0) {
                        i5++;
                    } else if (d(name)) {
                        j(xmlPullParser);
                    } else {
                        String str = (String) this.a;
                        if ("QualityLevel".equals(name)) {
                            dVar = new f(this, str, "QualityLevel");
                        } else if ("Protection".equals(name)) {
                            dVar = new e(this, str, "Protection");
                        } else if ("StreamIndex".equals(name)) {
                            dVar = new h(this, str);
                        }
                        if (dVar == null) {
                            i5 = 1;
                        } else {
                            a(dVar.e(xmlPullParser));
                        }
                    }
                }
            } else if (eventType != 3) {
                if (eventType == 4 && z5 && i5 == 0) {
                    k(xmlPullParser);
                }
            } else if (!z5) {
                continue;
            } else if (i5 > 0) {
                i5--;
            } else {
                String name2 = xmlPullParser.getName();
                f(xmlPullParser);
                if (!d(name2)) {
                    return b();
                }
            }
            xmlPullParser.next();
        }
    }

    public abstract void j(XmlPullParser xmlPullParser);

    public void l(Object obj, String str) {
        ((LinkedList) this.f19360d).add(Pair.create(str, obj));
    }

    public d(d dVar, String str, String str2) {
        this.f19359c = dVar;
        this.a = str;
        this.f19358b = str2;
        this.f19360d = new LinkedList();
    }

    public void a(Object obj) {
    }

    public void f(XmlPullParser xmlPullParser) {
    }

    public void k(XmlPullParser xmlPullParser) {
    }
}
