package com.google.android.datatransport.runtime.scheduling.jobscheduling;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.util.Base64;
import cc.e;
import cc.k;
import gc.a;
import java.util.concurrent.Executor;
import k2.r;
import wb.i;
import wb.p;

/* loaded from: classes3.dex */
public class AlarmManagerSchedulerBroadcastReceiver extends BroadcastReceiver {
    public static final /* synthetic */ int a = 0;

    @Override // android.content.BroadcastReceiver
    public final void onReceive(Context context, Intent intent) {
        String queryParameter = intent.getData().getQueryParameter("backendName");
        String queryParameter2 = intent.getData().getQueryParameter("extras");
        int intValue = Integer.valueOf(intent.getData().getQueryParameter("priority")).intValue();
        int i5 = intent.getExtras().getInt("attemptNumber");
        p.b(context);
        r a10 = i.a();
        a10.K(queryParameter);
        a10.f13144v = a.b(intValue);
        if (queryParameter2 != null) {
            a10.f13143i = Base64.decode(queryParameter2, 0);
        }
        k kVar = p.a().f19719d;
        ((Executor) kVar.f3402x).execute(new e(kVar, a10.k(), i5, new cc.a(0), 0));
    }
}
