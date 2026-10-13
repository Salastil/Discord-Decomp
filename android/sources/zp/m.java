package zp;

import java.util.ArrayList;
import java.util.Iterator;
import kotlin.collections.d0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class m {
    public final r a;

    /* renamed from: b, reason: collision with root package name */
    public final ArrayList f21367b;

    /* renamed from: c, reason: collision with root package name */
    public final String f21368c;

    /* renamed from: d, reason: collision with root package name */
    public final m f21369d;

    public m(r rVar, ArrayList parametersInfo, String str) {
        Intrinsics.checkNotNullParameter(parametersInfo, "parametersInfo");
        this.a = rVar;
        this.f21367b = parametersInfo;
        this.f21368c = str;
        m mVar = null;
        if (str != null) {
            r a = rVar != null ? rVar.a() : null;
            ArrayList arrayList = new ArrayList(d0.l(parametersInfo, 10));
            Iterator it = parametersInfo.iterator();
            while (it.hasNext()) {
                r rVar2 = (r) it.next();
                arrayList.add(rVar2 != null ? rVar2.a() : null);
            }
            mVar = new m(a, arrayList, null);
        }
        this.f21369d = mVar;
    }
}
