package w3;

import android.content.Context;
import androidx.work.impl.WorkDatabase;
import androidx.work.impl.background.systemjob.SystemJobService;
import kotlin.collections.c0;
import kotlin.jvm.functions.Function6;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final /* synthetic */ class p extends FunctionReferenceImpl implements Function6 {

    /* renamed from: d, reason: collision with root package name */
    public static final p f19669d = new p(6, q.class, "createSchedulers", "createSchedulers(Landroid/content/Context;Landroidx/work/Configuration;Landroidx/work/impl/utils/taskexecutor/TaskExecutor;Landroidx/work/impl/WorkDatabase;Landroidx/work/impl/constraints/trackers/Trackers;Landroidx/work/impl/Processor;)Ljava/util/List;", 1);

    @Override // kotlin.jvm.functions.Function6
    public final Object invoke(Object obj, Object obj2, Object obj3, Object obj4, Object obj5, Object obj6) {
        Context p02 = (Context) obj;
        v3.b p12 = (v3.b) obj2;
        h4.b p22 = (h4.b) obj3;
        WorkDatabase p3 = (WorkDatabase) obj4;
        c4.l p42 = (c4.l) obj5;
        e p5 = (e) obj6;
        Intrinsics.checkNotNullParameter(p02, "p0");
        Intrinsics.checkNotNullParameter(p12, "p1");
        Intrinsics.checkNotNullParameter(p22, "p2");
        Intrinsics.checkNotNullParameter(p3, "p3");
        Intrinsics.checkNotNullParameter(p42, "p4");
        Intrinsics.checkNotNullParameter(p5, "p5");
        String str = i.a;
        z3.b bVar = new z3.b(p02, p3, p12);
        f4.j.a(p02, SystemJobService.class, true);
        v3.p.d().a(i.a, "Created SystemJobScheduler and enabled SystemJobService");
        Intrinsics.checkNotNullExpressionValue(bVar, "createBestAvailableBackg…kDatabase, configuration)");
        return c0.g(bVar, new x3.c(p02, p12, p42, p5, new e4.c(p5, p22), p22));
    }
}
