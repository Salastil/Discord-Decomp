package com.appsflyer;

import com.discord.jank_stats.JankSessionRecorder;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3637d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Function1 f3638e;

    public /* synthetic */ a(Function1 function1, int i5) {
        this.f3637d = i5;
        this.f3638e = function1;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f3637d) {
            case 0:
                AFLogger.getMediationNetwork(this.f3638e);
                break;
            case 1:
                JankSessionRecorder.pendingRecords$lambda$24(this.f3638e);
                break;
            default:
                this.f3638e.invoke(null);
                break;
        }
    }
}
