package l4;

import android.graphics.Bitmap;
import android.graphics.Rect;
import androidx.collection.SparseArrayCompat;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;

/* loaded from: classes.dex */
public final class i {

    /* renamed from: c, reason: collision with root package name */
    public HashMap f13743c;

    /* renamed from: d, reason: collision with root package name */
    public HashMap f13744d;

    /* renamed from: e, reason: collision with root package name */
    public float f13745e;

    /* renamed from: f, reason: collision with root package name */
    public HashMap f13746f;

    /* renamed from: g, reason: collision with root package name */
    public ArrayList f13747g;

    /* renamed from: h, reason: collision with root package name */
    public SparseArrayCompat f13748h;

    /* renamed from: i, reason: collision with root package name */
    public s.k f13749i;
    public ArrayList j;
    public Rect k;

    /* renamed from: l, reason: collision with root package name */
    public float f13750l;

    /* renamed from: m, reason: collision with root package name */
    public float f13751m;

    /* renamed from: n, reason: collision with root package name */
    public float f13752n;

    /* renamed from: o, reason: collision with root package name */
    public boolean f13753o;
    public final d0 a = new d0();

    /* renamed from: b, reason: collision with root package name */
    public final HashSet f13742b = new HashSet();

    /* renamed from: p, reason: collision with root package name */
    public int f13754p = 0;

    public final void a(String str) {
        x4.c.b(str);
        this.f13742b.add(str);
    }

    public final float b() {
        return (long) (((this.f13751m - this.f13750l) / this.f13752n) * 1000.0f);
    }

    public final Map c() {
        float c6 = x4.h.c();
        if (c6 != this.f13745e) {
            for (Map.Entry entry : this.f13744d.entrySet()) {
                HashMap hashMap = this.f13744d;
                String str = (String) entry.getKey();
                x xVar = (x) entry.getValue();
                float f2 = this.f13745e / c6;
                int i5 = (int) (xVar.a * f2);
                int i6 = (int) (xVar.f13807b * f2);
                x xVar2 = new x(i5, xVar.f13808c, i6, xVar.f13809d, xVar.f13810e);
                Bitmap bitmap = xVar.f13811f;
                if (bitmap != null) {
                    xVar2.f13811f = Bitmap.createScaledBitmap(bitmap, i5, i6, true);
                }
                hashMap.put(str, xVar2);
            }
        }
        this.f13745e = c6;
        return this.f13744d;
    }

    public final q4.h d(String str) {
        int size = this.f13747g.size();
        for (int i5 = 0; i5 < size; i5++) {
            q4.h hVar = (q4.h) this.f13747g.get(i5);
            String str2 = hVar.a;
            if (str2.equalsIgnoreCase(str) || (str2.endsWith("\r") && str2.substring(0, str2.length() - 1).equalsIgnoreCase(str))) {
                return hVar;
            }
        }
        return null;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("LottieComposition:\n");
        Iterator it = this.j.iterator();
        while (it.hasNext()) {
            sb2.append(((t4.e) it.next()).a("\t"));
        }
        return sb2.toString();
    }
}
