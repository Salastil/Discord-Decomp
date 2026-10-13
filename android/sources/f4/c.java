package f4;

import android.database.Cursor;
import android.os.Build;
import android.text.TextUtils;
import androidx.work.impl.WorkDatabase;
import androidx.work.impl.WorkDatabase_Impl;
import androidx.work.impl.background.systemalarm.RescheduleReceiver;
import androidx.work.impl.workers.ConstraintTrackingWorker;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import java.util.UUID;
import kotlin.jvm.internal.Intrinsics;
import v3.x;
import v3.y;

/* loaded from: classes.dex */
public final class c implements Runnable {

    /* renamed from: i, reason: collision with root package name */
    public static final String f8332i = v3.p.f("EnqueueRunnable");

    /* renamed from: d, reason: collision with root package name */
    public final w3.k f8333d;

    /* renamed from: e, reason: collision with root package name */
    public final e4.r f8334e;

    public c(w3.k kVar) {
        e4.r rVar = new e4.r(24);
        this.f8333d = kVar;
        this.f8334e = rVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:109:0x039d  */
    /* JADX WARN: Removed duplicated region for block: B:119:0x03cb A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:146:0x014f  */
    /* JADX WARN: Removed duplicated region for block: B:158:0x0168 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:63:0x01c5  */
    /* JADX WARN: Removed duplicated region for block: B:85:0x0313  */
    /* JADX WARN: Removed duplicated region for block: B:99:0x0373  */
    /* JADX WARN: Type inference failed for: r15v7, types: [java.util.List] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean a(w3.k kVar) {
        boolean z5;
        boolean z6;
        boolean z7;
        boolean z8;
        WorkDatabase workDatabase;
        boolean z10;
        String[] strArr;
        boolean z11;
        Iterator it;
        boolean z12;
        boolean z13;
        Iterator it2;
        long j;
        boolean z14;
        UUID uuid;
        y yVar;
        y yVar2;
        Iterator it3;
        boolean z15;
        boolean z16;
        w3.k kVar2 = kVar;
        kVar2.getClass();
        HashSet T = w3.k.T(kVar2);
        w3.o oVar = kVar2.a;
        List list = kVar2.f19653d;
        int i5 = 0;
        String[] strArr2 = (String[]) T.toArray(new String[0]);
        String str = kVar2.f19651b;
        int i6 = kVar2.f19652c;
        oVar.f19661b.f19184c.getClass();
        long currentTimeMillis = System.currentTimeMillis();
        WorkDatabase workDatabase2 = oVar.f19662c;
        boolean z17 = strArr2 != null && strArr2.length > 0;
        y yVar3 = y.f19226i;
        y yVar4 = y.f19229x;
        y yVar5 = y.f19227v;
        if (z17) {
            int length = strArr2.length;
            z6 = false;
            z7 = false;
            z5 = true;
            while (i5 < length) {
                String str2 = strArr2[i5];
                List list2 = list;
                e4.o n6 = workDatabase2.t().n(str2);
                if (n6 == null) {
                    v3.p.d().b(f8332i, "Prerequisite " + str2 + " doesn't exist; not enqueuing");
                    break;
                }
                y yVar6 = n6.f7967b;
                z5 &= yVar6 == yVar3;
                if (yVar6 == yVar5) {
                    z7 = true;
                } else if (yVar6 == yVar4) {
                    z6 = true;
                }
                i5++;
                list = list2;
            }
        } else {
            z5 = true;
            z6 = false;
            z7 = false;
        }
        List list3 = list;
        boolean isEmpty = TextUtils.isEmpty(str);
        y yVar7 = y.f19224d;
        if (!isEmpty && !z17) {
            ArrayList o6 = workDatabase2.t().o(str);
            if (!o6.isEmpty()) {
                z8 = isEmpty;
                int i10 = 4;
                if (i6 != 3 && i6 != 4) {
                    if (i6 == 2) {
                        Iterator it4 = o6.iterator();
                        while (it4.hasNext()) {
                            y yVar8 = ((e4.n) it4.next()).f7966b;
                            if (yVar8 != yVar7 && yVar8 != y.f19225e) {
                            }
                            z13 = true;
                            z12 = false;
                        }
                    }
                    new b(oVar, str, 1).run();
                    e4.p t5 = workDatabase2.t();
                    Iterator it5 = o6.iterator();
                    while (it5.hasNext()) {
                        t5.b(((e4.n) it5.next()).a);
                    }
                    strArr = strArr2;
                    workDatabase = workDatabase2;
                    z11 = true;
                    it = list3.iterator();
                    while (it.hasNext()) {
                    }
                    kVar2 = kVar;
                    z12 = z11;
                    z13 = true;
                    kVar2.f19656g = z13;
                    return z12;
                }
                e4.c f2 = workDatabase2.f();
                ArrayList arrayList = new ArrayList();
                Iterator it6 = o6.iterator();
                while (it6.hasNext()) {
                    e4.n nVar = (e4.n) it6.next();
                    WorkDatabase workDatabase3 = workDatabase2;
                    String str3 = nVar.a;
                    Iterator it7 = it6;
                    WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) f2.f7939e;
                    e4.c cVar = f2;
                    a3.o g6 = a3.o.g(1, "SELECT COUNT(*)>0 FROM dependency WHERE prerequisite_id=?");
                    if (str3 == null) {
                        g6.S(1);
                    } else {
                        g6.n(1, str3);
                    }
                    workDatabase_Impl.b();
                    Cursor D = nt.a.D(workDatabase_Impl, g6);
                    try {
                        if (D.moveToFirst()) {
                            z15 = false;
                            if (D.getInt(0) != 0) {
                                z16 = true;
                                if (!z16) {
                                    y yVar9 = nVar.f7966b;
                                    boolean z18 = z5 & (yVar9 == yVar3 ? true : z15);
                                    if (yVar9 == yVar5) {
                                        z7 = true;
                                    } else if (yVar9 == yVar4) {
                                        z6 = true;
                                    }
                                    arrayList.add(nVar.a);
                                    z5 = z18;
                                }
                                i10 = 4;
                                workDatabase2 = workDatabase3;
                                it6 = it7;
                                f2 = cVar;
                            }
                        } else {
                            z15 = false;
                        }
                        z16 = z15;
                        if (!z16) {
                        }
                        i10 = 4;
                        workDatabase2 = workDatabase3;
                        it6 = it7;
                        f2 = cVar;
                    } finally {
                        D.close();
                        g6.i();
                    }
                }
                workDatabase = workDatabase2;
                z10 = false;
                ArrayList arrayList2 = arrayList;
                arrayList2 = arrayList;
                if (i6 == i10 && (z6 || z7)) {
                    e4.p t10 = workDatabase.t();
                    Iterator it8 = t10.o(str).iterator();
                    while (it8.hasNext()) {
                        t10.b(((e4.n) it8.next()).a);
                    }
                    z6 = false;
                    z7 = false;
                    arrayList2 = Collections.EMPTY_LIST;
                }
                strArr2 = (String[]) arrayList2.toArray(strArr2);
                z17 = strArr2.length > 0;
                strArr = strArr2;
                z11 = z10;
                it = list3.iterator();
                while (it.hasNext()) {
                    v3.s sVar = (v3.s) it.next();
                    e4.o workSpec = sVar.f19219b;
                    UUID uuid2 = sVar.a;
                    if (!z17 || z5) {
                        workSpec.f7977n = currentTimeMillis;
                    } else if (z7) {
                        workSpec.f7967b = yVar5;
                    } else if (z6) {
                        workSpec.f7967b = yVar4;
                    } else {
                        workSpec.f7967b = y.f19228w;
                    }
                    if (workSpec.f7967b == yVar7) {
                        z11 = true;
                    }
                    e4.p t11 = workDatabase.t();
                    List schedulers = oVar.f19664e;
                    boolean z19 = z11;
                    Intrinsics.checkNotNullParameter(schedulers, "schedulers");
                    Intrinsics.checkNotNullParameter(workSpec, "workSpec");
                    w3.o oVar2 = oVar;
                    y yVar10 = yVar7;
                    try {
                        if (Build.VERSION.SDK_INT < 26) {
                            Intrinsics.checkNotNullParameter(workSpec, "workSpec");
                            v3.e eVar = workSpec.j;
                            String str4 = workSpec.f7968c;
                            if (!Intrinsics.areEqual(str4, ConstraintTrackingWorker.class.getName()) && (eVar.f19196d || eVar.f19197e)) {
                                kt.g gVar = new kt.g();
                                gVar.b(workSpec.f7970e.a);
                                it2 = it;
                                gVar.a.put("androidx.work.impl.workers.ConstraintTrackingWorker.ARGUMENT_CLASS_NAME", str4);
                                v3.f input = new v3.f(gVar.a);
                                v3.f.b(input);
                                Intrinsics.checkNotNullExpressionValue(input, "Builder().putAll(workSpe…ame)\n            .build()");
                                String workerClassName = ConstraintTrackingWorker.class.getName();
                                Intrinsics.checkNotNullExpressionValue(workerClassName, "name");
                                String id2 = workSpec.a;
                                y state = workSpec.f7967b;
                                j = currentTimeMillis;
                                String inputMergerClassName = workSpec.f7969d;
                                v3.f output = workSpec.f7971f;
                                z14 = z17;
                                uuid = uuid2;
                                long j5 = workSpec.f7972g;
                                long j7 = workSpec.f7973h;
                                long j10 = workSpec.f7974i;
                                v3.e constraints = workSpec.j;
                                int i11 = workSpec.k;
                                v3.a backoffPolicy = workSpec.f7975l;
                                yVar = yVar4;
                                yVar2 = yVar5;
                                long j11 = workSpec.f7976m;
                                long j12 = workSpec.f7977n;
                                long j13 = workSpec.f7978o;
                                long j14 = workSpec.f7979p;
                                boolean z20 = workSpec.f7980q;
                                x outOfQuotaPolicy = workSpec.f7981r;
                                int i12 = workSpec.f7982s;
                                int i13 = workSpec.f7983t;
                                long j15 = workSpec.f7984u;
                                int i14 = workSpec.f7985v;
                                int i15 = workSpec.f7986w;
                                Intrinsics.checkNotNullParameter(id2, "id");
                                Intrinsics.checkNotNullParameter(state, "state");
                                Intrinsics.checkNotNullParameter(workerClassName, "workerClassName");
                                Intrinsics.checkNotNullParameter(inputMergerClassName, "inputMergerClassName");
                                Intrinsics.checkNotNullParameter(input, "input");
                                Intrinsics.checkNotNullParameter(output, "output");
                                Intrinsics.checkNotNullParameter(constraints, "constraints");
                                Intrinsics.checkNotNullParameter(backoffPolicy, "backoffPolicy");
                                Intrinsics.checkNotNullParameter(outOfQuotaPolicy, "outOfQuotaPolicy");
                                workSpec = new e4.o(id2, state, workerClassName, inputMergerClassName, input, output, j5, j7, j10, constraints, i11, backoffPolicy, j11, j12, j13, j14, z20, outOfQuotaPolicy, i12, i13, j15, i14, i15);
                                WorkDatabase_Impl workDatabase_Impl2 = (WorkDatabase_Impl) t11.a;
                                workDatabase_Impl2.b();
                                workDatabase_Impl2.c();
                                ((e4.b) t11.f7987b).g(workSpec);
                                workDatabase_Impl2.o();
                                workDatabase_Impl2.k();
                                if (z14) {
                                    for (String str5 : strArr) {
                                        String uuid3 = uuid.toString();
                                        Intrinsics.checkNotNullExpressionValue(uuid3, "id.toString()");
                                        e4.a aVar = new e4.a(uuid3, str5);
                                        e4.c f10 = workDatabase.f();
                                        WorkDatabase_Impl workDatabase_Impl3 = (WorkDatabase_Impl) f10.f7939e;
                                        workDatabase_Impl3.b();
                                        workDatabase_Impl3.c();
                                        try {
                                            ((e4.b) f10.f7940i).g(aVar);
                                            workDatabase_Impl3.o();
                                            workDatabase_Impl3.k();
                                        } finally {
                                        }
                                    }
                                }
                                e4.r u5 = workDatabase.u();
                                String id3 = uuid.toString();
                                Intrinsics.checkNotNullExpressionValue(id3, "id.toString()");
                                Set tags = sVar.f19220c;
                                u5.getClass();
                                Intrinsics.checkNotNullParameter(id3, "id");
                                Intrinsics.checkNotNullParameter(tags, "tags");
                                Intrinsics.checkNotNullParameter(id3, "id");
                                Intrinsics.checkNotNullParameter(tags, "tags");
                                it3 = tags.iterator();
                                while (it3.hasNext()) {
                                    e4.q qVar = new e4.q((String) it3.next(), id3);
                                    WorkDatabase_Impl workDatabase_Impl4 = (WorkDatabase_Impl) u5.f8000e;
                                    workDatabase_Impl4.b();
                                    workDatabase_Impl4.c();
                                    try {
                                        ((e4.b) u5.f8001i).g(qVar);
                                        workDatabase_Impl4.o();
                                        workDatabase_Impl4.k();
                                    } finally {
                                    }
                                }
                                if (z8) {
                                    e4.l r5 = workDatabase.r();
                                    String uuid4 = uuid.toString();
                                    Intrinsics.checkNotNullExpressionValue(uuid4, "id.toString()");
                                    e4.k kVar3 = new e4.k(str, uuid4);
                                    WorkDatabase_Impl workDatabase_Impl5 = (WorkDatabase_Impl) r5.f7959e;
                                    workDatabase_Impl5.b();
                                    workDatabase_Impl5.c();
                                    try {
                                        ((e4.b) r5.f7960i).g(kVar3);
                                        workDatabase_Impl5.o();
                                    } finally {
                                    }
                                }
                                z11 = z19;
                                oVar = oVar2;
                                yVar7 = yVar10;
                                z17 = z14;
                                it = it2;
                                currentTimeMillis = j;
                                yVar4 = yVar;
                                yVar5 = yVar2;
                            }
                        }
                        ((e4.b) t11.f7987b).g(workSpec);
                        workDatabase_Impl2.o();
                        workDatabase_Impl2.k();
                        if (z14) {
                        }
                        e4.r u52 = workDatabase.u();
                        String id32 = uuid.toString();
                        Intrinsics.checkNotNullExpressionValue(id32, "id.toString()");
                        Set tags2 = sVar.f19220c;
                        u52.getClass();
                        Intrinsics.checkNotNullParameter(id32, "id");
                        Intrinsics.checkNotNullParameter(tags2, "tags");
                        Intrinsics.checkNotNullParameter(id32, "id");
                        Intrinsics.checkNotNullParameter(tags2, "tags");
                        it3 = tags2.iterator();
                        while (it3.hasNext()) {
                        }
                        if (z8) {
                        }
                        z11 = z19;
                        oVar = oVar2;
                        yVar7 = yVar10;
                        z17 = z14;
                        it = it2;
                        currentTimeMillis = j;
                        yVar4 = yVar;
                        yVar5 = yVar2;
                    } finally {
                    }
                    it2 = it;
                    j = currentTimeMillis;
                    z14 = z17;
                    uuid = uuid2;
                    yVar = yVar4;
                    yVar2 = yVar5;
                    WorkDatabase_Impl workDatabase_Impl22 = (WorkDatabase_Impl) t11.a;
                    workDatabase_Impl22.b();
                    workDatabase_Impl22.c();
                }
                kVar2 = kVar;
                z12 = z11;
                z13 = true;
                kVar2.f19656g = z13;
                return z12;
            }
        }
        z8 = isEmpty;
        workDatabase = workDatabase2;
        z10 = false;
        strArr = strArr2;
        z11 = z10;
        it = list3.iterator();
        while (it.hasNext()) {
        }
        kVar2 = kVar;
        z12 = z11;
        z13 = true;
        kVar2.f19656g = z13;
        return z12;
    }

    @Override // java.lang.Runnable
    public final void run() {
        boolean z5;
        e4.r rVar = this.f8334e;
        w3.k kVar = this.f8333d;
        try {
            kVar.getClass();
            w3.o oVar = kVar.a;
            HashSet hashSet = new HashSet();
            hashSet.addAll(kVar.f19654e);
            HashSet T = w3.k.T(kVar);
            Iterator it = hashSet.iterator();
            while (true) {
                if (!it.hasNext()) {
                    hashSet.removeAll(kVar.f19654e);
                    z5 = false;
                    break;
                } else if (T.contains((String) it.next())) {
                    z5 = true;
                    break;
                }
            }
            if (z5) {
                throw new IllegalStateException("WorkContinuation has cycles (" + kVar + ")");
            }
            WorkDatabase workDatabase = oVar.f19662c;
            workDatabase.c();
            try {
                e4.f.j(workDatabase, oVar.f19661b, kVar);
                boolean a = a(kVar);
                workDatabase.o();
                if (a) {
                    j.a(oVar.a, RescheduleReceiver.class, true);
                    w3.i.b(oVar.f19661b, oVar.f19662c, oVar.f19664e);
                }
                rVar.q(v3.w.B);
            } finally {
                workDatabase.k();
            }
        } catch (Throwable th2) {
            rVar.q(new v3.t(th2));
        }
    }
}
