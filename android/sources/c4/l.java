package c4;

import android.content.Context;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class l {
    public final a a;

    /* renamed from: b, reason: collision with root package name */
    public final a f3311b;

    /* renamed from: c, reason: collision with root package name */
    public final i f3312c;

    /* renamed from: d, reason: collision with root package name */
    public final a f3313d;

    public l(Context context, h4.b taskExecutor) {
        Context context2 = context.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(context2, "context.applicationContext");
        Intrinsics.checkNotNullParameter(context2, "context");
        Intrinsics.checkNotNullParameter(taskExecutor, "taskExecutor");
        a batteryChargingTracker = new a(context2, taskExecutor, 0);
        Context context3 = context.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(context3, "context.applicationContext");
        Intrinsics.checkNotNullParameter(context3, "context");
        Intrinsics.checkNotNullParameter(taskExecutor, "taskExecutor");
        a batteryNotLowTracker = new a(context3, taskExecutor, 1);
        Context context4 = context.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(context4, "context.applicationContext");
        String str = j.a;
        Intrinsics.checkNotNullParameter(context4, "context");
        Intrinsics.checkNotNullParameter(taskExecutor, "taskExecutor");
        i networkStateTracker = new i(context4, taskExecutor);
        Context context5 = context.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(context5, "context.applicationContext");
        Intrinsics.checkNotNullParameter(context5, "context");
        Intrinsics.checkNotNullParameter(taskExecutor, "taskExecutor");
        a storageNotLowTracker = new a(context5, taskExecutor, 2);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(taskExecutor, "taskExecutor");
        Intrinsics.checkNotNullParameter(batteryChargingTracker, "batteryChargingTracker");
        Intrinsics.checkNotNullParameter(batteryNotLowTracker, "batteryNotLowTracker");
        Intrinsics.checkNotNullParameter(networkStateTracker, "networkStateTracker");
        Intrinsics.checkNotNullParameter(storageNotLowTracker, "storageNotLowTracker");
        this.a = batteryChargingTracker;
        this.f3311b = batteryNotLowTracker;
        this.f3312c = networkStateTracker;
        this.f3313d = storageNotLowTracker;
    }
}
