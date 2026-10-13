package androidx.constraintlayout.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.content.res.XmlResourceParser;
import android.util.TypedValue;
import android.util.Xml;
import java.util.HashMap;

/* loaded from: classes.dex */
public final class a {
    public boolean a = false;

    /* renamed from: b, reason: collision with root package name */
    public int f1320b;

    /* renamed from: c, reason: collision with root package name */
    public int f1321c;

    /* renamed from: d, reason: collision with root package name */
    public float f1322d;

    /* renamed from: e, reason: collision with root package name */
    public String f1323e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f1324f;

    /* renamed from: g, reason: collision with root package name */
    public int f1325g;

    public a(a aVar, Object obj) {
        aVar.getClass();
        this.f1320b = aVar.f1320b;
        b(obj);
    }

    public static void a(Context context, XmlResourceParser xmlResourceParser, HashMap hashMap) {
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(Xml.asAttributeSet(xmlResourceParser), m.f1415d);
        int indexCount = obtainStyledAttributes.getIndexCount();
        String str = null;
        int i5 = 0;
        boolean z5 = false;
        Object obj = null;
        for (int i6 = 0; i6 < indexCount; i6++) {
            int index = obtainStyledAttributes.getIndex(i6);
            int i10 = 1;
            if (index == 0) {
                str = obtainStyledAttributes.getString(index);
                if (str != null && str.length() > 0) {
                    str = Character.toUpperCase(str.charAt(0)) + str.substring(1);
                }
            } else if (index == 10) {
                str = obtainStyledAttributes.getString(index);
                z5 = true;
            } else if (index == 1) {
                obj = Boolean.valueOf(obtainStyledAttributes.getBoolean(index, false));
                i5 = 6;
            } else {
                int i11 = 3;
                if (index == 3) {
                    obj = Integer.valueOf(obtainStyledAttributes.getColor(index, 0));
                } else {
                    i11 = 4;
                    if (index == 2) {
                        obj = Integer.valueOf(obtainStyledAttributes.getColor(index, 0));
                    } else {
                        if (index == 7) {
                            obj = Float.valueOf(TypedValue.applyDimension(1, obtainStyledAttributes.getDimension(index, 0.0f), context.getResources().getDisplayMetrics()));
                        } else if (index == 4) {
                            obj = Float.valueOf(obtainStyledAttributes.getDimension(index, 0.0f));
                        } else {
                            i11 = 5;
                            if (index == 5) {
                                obj = Float.valueOf(obtainStyledAttributes.getFloat(index, Float.NaN));
                                i5 = 2;
                            } else {
                                if (index == 6) {
                                    obj = Integer.valueOf(obtainStyledAttributes.getInteger(index, -1));
                                } else if (index == 9) {
                                    obj = obtainStyledAttributes.getString(index);
                                } else {
                                    i10 = 8;
                                    if (index == 8) {
                                        int resourceId = obtainStyledAttributes.getResourceId(index, -1);
                                        if (resourceId == -1) {
                                            resourceId = obtainStyledAttributes.getInt(index, -1);
                                        }
                                        obj = Integer.valueOf(resourceId);
                                    }
                                }
                                i5 = i10;
                            }
                        }
                        i5 = 7;
                    }
                }
                i5 = i11;
            }
        }
        if (str != null && obj != null) {
            a aVar = new a();
            aVar.f1320b = i5;
            aVar.a = z5;
            aVar.b(obj);
            hashMap.put(str, aVar);
        }
        obtainStyledAttributes.recycle();
    }

    public final void b(Object obj) {
        switch (f0.e.b(this.f1320b)) {
            case 0:
            case 7:
                this.f1321c = ((Integer) obj).intValue();
                break;
            case 1:
                this.f1322d = ((Float) obj).floatValue();
                break;
            case 2:
            case 3:
                this.f1325g = ((Integer) obj).intValue();
                break;
            case 4:
                this.f1323e = (String) obj;
                break;
            case 5:
                this.f1324f = ((Boolean) obj).booleanValue();
                break;
            case 6:
                this.f1322d = ((Float) obj).floatValue();
                break;
        }
    }
}
