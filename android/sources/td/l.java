package td;

import android.net.Uri;
import com.google.android.exoplayer2.Format;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Map;

/* loaded from: classes3.dex */
public final class l extends m {

    /* renamed from: n, reason: collision with root package name */
    public static final l f18319n;

    /* renamed from: d, reason: collision with root package name */
    public final List f18320d;

    /* renamed from: e, reason: collision with root package name */
    public final List f18321e;

    /* renamed from: f, reason: collision with root package name */
    public final List f18322f;

    /* renamed from: g, reason: collision with root package name */
    public final List f18323g;

    /* renamed from: h, reason: collision with root package name */
    public final List f18324h;

    /* renamed from: i, reason: collision with root package name */
    public final List f18325i;
    public final Format j;
    public final List k;

    /* renamed from: l, reason: collision with root package name */
    public final Map f18326l;

    /* renamed from: m, reason: collision with root package name */
    public final List f18327m;

    static {
        List list = Collections.EMPTY_LIST;
        f18319n = new l("", list, list, list, list, list, list, null, list, false, Collections.EMPTY_MAP, list);
    }

    public l(String str, List list, List list2, List list3, List list4, List list5, List list6, Format format, List list7, boolean z5, Map map, List list8) {
        super(str, list, z5);
        ArrayList arrayList = new ArrayList();
        for (int i5 = 0; i5 < list2.size(); i5++) {
            Uri uri = ((k) list2.get(i5)).a;
            if (!arrayList.contains(uri)) {
                arrayList.add(uri);
            }
        }
        b(list3, arrayList);
        b(list4, arrayList);
        b(list5, arrayList);
        b(list6, arrayList);
        this.f18320d = Collections.unmodifiableList(arrayList);
        this.f18321e = Collections.unmodifiableList(list2);
        this.f18322f = Collections.unmodifiableList(list3);
        this.f18323g = Collections.unmodifiableList(list4);
        this.f18324h = Collections.unmodifiableList(list5);
        this.f18325i = Collections.unmodifiableList(list6);
        this.j = format;
        this.k = list7 != null ? Collections.unmodifiableList(list7) : null;
        this.f18326l = Collections.unmodifiableMap(map);
        this.f18327m = Collections.unmodifiableList(list8);
    }

    public static void b(List list, ArrayList arrayList) {
        for (int i5 = 0; i5 < list.size(); i5++) {
            Uri uri = ((j) list.get(i5)).a;
            if (!arrayList.contains(uri)) {
                arrayList.add(uri);
            }
        }
    }

    public static ArrayList c(int i5, List list, List list2) {
        ArrayList arrayList = new ArrayList(list2.size());
        for (int i6 = 0; i6 < list.size(); i6++) {
            Object obj = list.get(i6);
            int i10 = 0;
            while (true) {
                if (i10 < list2.size()) {
                    md.b bVar = (md.b) list2.get(i10);
                    if (bVar.f14445e == i5 && bVar.f14446i == i6) {
                        arrayList.add(obj);
                        break;
                    }
                    i10++;
                }
            }
        }
        return arrayList;
    }

    @Override // md.a
    public final Object a(List list) {
        ArrayList c6 = c(0, this.f18321e, list);
        List list2 = Collections.EMPTY_LIST;
        return new l(this.a, this.f18328b, c6, list2, c(1, this.f18323g, list), c(2, this.f18324h, list), list2, this.j, this.k, this.f18329c, this.f18326l, this.f18327m);
    }
}
