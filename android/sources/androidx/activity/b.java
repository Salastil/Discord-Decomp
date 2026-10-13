package androidx.activity;

import androidx.activity.ComponentActivity;
import e.h;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes.dex */
public final class b extends Lambda implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ ComponentActivity f750d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(ComponentActivity componentActivity) {
        super(0);
        this.f750d = componentActivity;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        ComponentActivity.ReportFullyDrawnExecutor reportFullyDrawnExecutor;
        ComponentActivity componentActivity = this.f750d;
        reportFullyDrawnExecutor = componentActivity.reportFullyDrawnExecutor;
        return new FullyDrawnReporter(reportFullyDrawnExecutor, new h(componentActivity, 1));
    }
}
