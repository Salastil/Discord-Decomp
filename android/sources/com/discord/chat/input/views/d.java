package com.discord.chat.input.views;

import a5.g;
import android.content.ClipData;
import android.content.Context;
import androidx.core.util.Predicate;
import com.discord.crash_reporting.CrashReporting;
import com.google.android.exoplayer2.trackselection.DefaultTrackSelector;
import ei.j;
import fi.r0;
import ie.s;
import io.sentry.Hint;
import io.sentry.SentryEvent;
import io.sentry.android.core.t0;
import io.sentry.i5;
import java.util.HashMap;
import java.util.HashSet;
import ke.y;
import kotlin.jvm.internal.Intrinsics;
import nd.h;

/* loaded from: classes.dex */
public final /* synthetic */ class d implements Predicate, i5, j, io.sentry.util.runtime.a, g3.b {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3872d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Context f3873e;

    public /* synthetic */ d(Context context, int i5) {
        this.f3872d = i5;
        this.f3873e = context;
    }

    @Override // io.sentry.i5
    public SentryEvent a(SentryEvent sentryEvent, Hint hint) {
        SentryEvent init$lambda$3$lambda$0;
        init$lambda$3$lambda$0 = CrashReporting.init$lambda$3$lambda$0(this.f3873e, sentryEvent, hint);
        return init$lambda$3$lambda$0;
    }

    @Override // ei.j
    public Object get() {
        s sVar;
        switch (this.f3872d) {
            case 2:
                Context context = this.f3873e;
                new g(1);
                context.getApplicationContext();
                h hVar = new h();
                HashMap hashMap = new HashMap();
                new HashSet();
                HashMap hashMap2 = new HashMap();
                hashMap.clear();
                hashMap2.clear();
                return hVar;
            case 3:
                return new DefaultTrackSelector(this.f3873e);
            default:
                Context context2 = this.f3873e;
                r0 r0Var = s.f10737n;
                synchronized (s.class) {
                    try {
                        if (s.f10743t == null) {
                            cd.c cVar = new cd.c(context2);
                            s.f10743t = new s((Context) cVar.f3409i, (HashMap) cVar.f3410v, cVar.f3407d, (y) cVar.f3411w, cVar.f3408e);
                        }
                        sVar = s.f10743t;
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
                return sVar;
        }
    }

    @Override // g3.b
    public g3.c k(g3.a configuration) {
        Context context = this.f3873e;
        Intrinsics.checkNotNullParameter(context, "$context");
        Intrinsics.checkNotNullParameter(configuration, "configuration");
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(context, "context");
        String str = (String) configuration.f9088d;
        a1.d callback = (a1.d) configuration.f9089e;
        Intrinsics.checkNotNullParameter(callback, "callback");
        if (callback == null) {
            throw new IllegalArgumentException("Must set a callback to create the configuration.");
        }
        if (str == null || str.length() == 0) {
            throw new IllegalArgumentException("Must set a non-null database name to a configuration that uses the no backup directory.");
        }
        Intrinsics.checkNotNullParameter(new g3.a(context, str, callback, true, true), "configuration");
        return new h3.h(context, str, callback, true, true);
    }

    @Override // io.sentry.util.runtime.a
    public Object run() {
        switch (this.f3872d) {
        }
        return t0.a(this.f3873e);
    }

    @Override // androidx.core.util.Predicate
    public boolean test(Object obj) {
        boolean lambda$8$lambda$4;
        lambda$8$lambda$4 = ChatInputRootView.lambda$8$lambda$4(this.f3873e, (ClipData.Item) obj);
        return lambda$8$lambda$4;
    }
}
