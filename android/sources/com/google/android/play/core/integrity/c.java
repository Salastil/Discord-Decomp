package com.google.android.play.core.integrity;

import android.content.Context;
import android.os.Bundle;
import di.a0;
import io.sentry.hints.j;
import java.util.ArrayList;
import xh.p;
import xh.s;
import ys.l;

/* loaded from: classes3.dex */
public final class c {
    public final a0 a;

    /* renamed from: b, reason: collision with root package name */
    public final String f6177b;

    /* renamed from: c, reason: collision with root package name */
    public final jg.g f6178c;

    /* renamed from: d, reason: collision with root package name */
    public final j8.c f6179d;

    /* renamed from: e, reason: collision with root package name */
    public final di.c f6180e;

    public c(Context context, a0 a0Var, j8.c cVar) {
        jg.g gVar = new jg.g();
        this.f6178c = gVar;
        this.f6177b = context.getPackageName();
        this.a = a0Var;
        this.f6179d = cVar;
        di.c cVar2 = new di.c(context, a0Var, "ExpressIntegrityService", p.a, new j(21));
        this.f6180e = cVar2;
        cVar2.a().post(new di.a(this, gVar, context));
    }

    public static Bundle a(c cVar, s sVar, long j, long j5) {
        Bundle bundle = new Bundle();
        bundle.putString("package.name", cVar.f6177b);
        bundle.putLong("cloud.prj", j);
        bundle.putString("nonce", sVar.a);
        bundle.putLong("warm.up.sid", j5);
        bundle.putInt("playcore.integrity.version.major", 1);
        bundle.putInt("playcore.integrity.version.minor", 6);
        bundle.putInt("playcore.integrity.version.patch", 0);
        bundle.putInt("webview.request.mode", 0);
        bundle.putIntegerArrayList("request.verdict.opt.out", new ArrayList<>(sVar.f20489b));
        ArrayList arrayList = new ArrayList();
        arrayList.add(new di.s(5, System.currentTimeMillis()));
        bundle.putParcelableArrayList("event_timestamps", new ArrayList<>(l.b(arrayList)));
        return bundle;
    }

    public static Bundle b(c cVar, long j) {
        Bundle bundle = new Bundle();
        bundle.putString("package.name", cVar.f6177b);
        bundle.putLong("cloud.prj", j);
        bundle.putInt("playcore.integrity.version.major", 1);
        bundle.putInt("playcore.integrity.version.minor", 6);
        bundle.putInt("playcore.integrity.version.patch", 0);
        bundle.putInt("webview.request.mode", 0);
        ArrayList arrayList = new ArrayList();
        arrayList.add(new di.s(4, System.currentTimeMillis()));
        bundle.putParcelableArrayList("event_timestamps", new ArrayList<>(l.b(arrayList)));
        return bundle;
    }

    public static boolean c(c cVar) {
        jg.g gVar = cVar.f6178c;
        return gVar.a.m() && ((Integer) gVar.a.i()).intValue() < 83420000;
    }

    public static boolean d(c cVar) {
        jg.g gVar = cVar.f6178c;
        return gVar.a.m() && ((Integer) gVar.a.i()).intValue() == 0;
    }
}
