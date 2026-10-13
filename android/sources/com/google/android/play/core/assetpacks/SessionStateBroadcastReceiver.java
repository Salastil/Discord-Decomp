package com.google.android.play.core.assetpacks;

import a5.m;
import a5.s;
import android.app.PendingIntent;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import e4.o;
import java.util.ArrayList;
import java.util.Collections;
import java.util.concurrent.Executor;
import k2.r;
import kotlin.jvm.internal.Intrinsics;
import r8.c;
import th.a;
import th.i0;
import th.m0;
import th.w;
import uh.f;
import v3.x;
import v3.z;
import w3.k;

/* loaded from: classes3.dex */
public final class SessionStateBroadcastReceiver extends BroadcastReceiver {
    public static final m a = new m("SessionStateBroadcastReceiver", 3);

    @Override // android.content.BroadcastReceiver
    public final void onReceive(Context context, Intent intent) {
        Bundle bundleExtra = intent.getBundleExtra("com.google.android.play.core.FLAGS");
        m mVar = a;
        if (bundleExtra == null) {
            mVar.b("Empty flags bundle received from broadcast.", new Object[0]);
            return;
        }
        if (bundleExtra.getBoolean("enableWorkManager")) {
            Bundle bundleExtra2 = intent.getBundleExtra("com.google.android.play.core.assetpacks.receiver.EXTRA_SESSION_STATE");
            if (bundleExtra2 == null) {
                mVar.b("Empty bundle received from broadcast.", new Object[0]);
                return;
            }
            i0 i0Var = (i0) ((f) m0.b(context).f7955v).a();
            Bundle bundleExtra3 = intent.getBundleExtra("com.google.android.play.core.assetpacks.receiver.EXTRA_NOTIFICATION_OPTIONS");
            f fVar = i0Var.f18473f;
            m mVar2 = i0.f18468i;
            ArrayList<String> stringArrayList = bundleExtra2.getStringArrayList("pack_names");
            if (stringArrayList == null || stringArrayList.size() != 1) {
                mVar2.b("Corrupt packStateBundle.", new Object[0]);
                return;
            }
            boolean z5 = bundleExtra.getBoolean("enableExpeditedWork");
            if (z5 && bundleExtra3 == null) {
                mVar2.b("Notification options must be present when expedited work is enabled.", new Object[0]);
                return;
            }
            w d6 = AssetPackState.d(bundleExtra2, stringArrayList.get(0), i0Var.f18469b, i0Var.f18470c, new c(17));
            mVar2.a("ExtractionWorkScheduler.scheduleExtraction: %s", d6);
            if (((PendingIntent) bundleExtra2.getParcelable("confirmation_intent")) != null) {
                i0Var.f18471d.getClass();
            }
            ((Executor) i0Var.f18475h.a()).execute(new s(i0Var, bundleExtra2, d6, 12));
            if (!z5) {
                r rVar = new r(ExtractionWorker.class);
                v3.f inputData = a.b(bundleExtra2, new Bundle());
                Intrinsics.checkNotNullParameter(inputData, "inputData");
                ((o) rVar.f13143i).f7970e = inputData;
                z zVar = (z) fVar.a();
                v3.s j = rVar.j();
                zVar.getClass();
                new k((w3.o) zVar, "extractAssetPacks", 3, Collections.singletonList(j)).S();
                return;
            }
            r rVar2 = new r(ExtractionWorker.class);
            x policy = x.f19221d;
            Intrinsics.checkNotNullParameter(policy, "policy");
            o oVar = (o) rVar2.f13143i;
            oVar.f7980q = true;
            oVar.f7981r = policy;
            v3.f inputData2 = a.b(bundleExtra2, bundleExtra3);
            Intrinsics.checkNotNullParameter(inputData2, "inputData");
            ((o) rVar2.f13143i).f7970e = inputData2;
            z zVar2 = (z) fVar.a();
            v3.s j5 = rVar2.j();
            zVar2.getClass();
            new k((w3.o) zVar2, "extractAssetPacks", 3, Collections.singletonList(j5)).S();
        }
    }
}
