package io.sentry.android.core;

import android.app.ApplicationExitInfo;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import io.sentry.Hint;
import io.sentry.SentryEvent;
import io.sentry.SentryLevel;
import io.sentry.e6;
import j$.time.Instant;
import j$.time.format.DateTimeFormatter;
import java.io.BufferedReader;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

/* loaded from: classes3.dex */
public final class z implements h0 {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final SentryAndroidOptions f11363b;

    public /* synthetic */ z(SentryAndroidOptions sentryAndroidOptions, int i5) {
        this.a = i5;
        this.f11363b = sentryAndroidOptions;
    }

    @Override // io.sentry.android.core.h0
    public final int a() {
        switch (this.a) {
            case 0:
                return 6;
            default:
                return 5;
        }
    }

    @Override // io.sentry.android.core.h0
    public final Long b() {
        switch (this.a) {
            case 0:
                return io.sentry.android.core.cache.b.k(this.f11363b, "last_anr_report", "ANR");
            default:
                return io.sentry.android.core.cache.b.k(this.f11363b, "last_tombstone_report", "Tombstone");
        }
    }

    @Override // io.sentry.android.core.h0
    public final boolean c() {
        switch (this.a) {
            case 0:
                return this.f11363b.isReportHistoricalAnrs();
            default:
                return this.f11363b.isReportHistoricalTombstones();
        }
    }

    @Override // io.sentry.android.core.h0
    public final e4.m d(ApplicationExitInfo applicationExitInfo, boolean z5) {
        com.google.firebase.messaging.r rVar;
        byte[] bArr;
        InputStream traceInputStream;
        switch (this.a) {
            case 0:
                SentryAndroidOptions sentryAndroidOptions = this.f11363b;
                long timestamp = applicationExitInfo.getTimestamp();
                boolean z6 = applicationExitInfo.getImportance() != 100;
                try {
                    traceInputStream = applicationExitInfo.getTraceInputStream();
                } catch (Throwable th2) {
                    sentryAndroidOptions.getLogger().k(SentryLevel.WARNING, "Failed to read ANR thread dump", th2);
                    rVar = new com.google.firebase.messaging.r(a0.NO_DUMP);
                }
                try {
                    if (traceInputStream == null) {
                        rVar = new com.google.firebase.messaging.r(a0.NO_DUMP);
                        if (traceInputStream != null) {
                            traceInputStream.close();
                        }
                    } else {
                        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                        try {
                            byte[] bArr2 = new byte[IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET];
                            while (true) {
                                int read = traceInputStream.read(bArr2, 0, IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET);
                                if (read != -1) {
                                    byteArrayOutputStream.write(bArr2, 0, read);
                                } else {
                                    byte[] byteArray = byteArrayOutputStream.toByteArray();
                                    byteArrayOutputStream.close();
                                    traceInputStream.close();
                                    try {
                                        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new ByteArrayInputStream(byteArray)));
                                        try {
                                            ArrayList arrayList = new ArrayList();
                                            while (true) {
                                                String readLine = bufferedReader.readLine();
                                                if (readLine != null) {
                                                    io.sentry.android.core.internal.threaddump.a aVar = new io.sentry.android.core.internal.threaddump.a();
                                                    aVar.a = readLine;
                                                    arrayList.add(aVar);
                                                } else {
                                                    a5.g gVar = new a5.g();
                                                    gVar.f157i = arrayList;
                                                    gVar.f155d = arrayList.size();
                                                    io.sentry.android.core.internal.threaddump.b bVar = new io.sentry.android.core.internal.threaddump.b(sentryAndroidOptions, z6);
                                                    bVar.d(gVar);
                                                    ArrayList arrayList2 = bVar.f11198e;
                                                    ArrayList arrayList3 = new ArrayList(bVar.f11197d.values());
                                                    if (arrayList2.isEmpty()) {
                                                        rVar = new com.google.firebase.messaging.r(a0.NO_DUMP);
                                                        bufferedReader.close();
                                                    } else {
                                                        com.google.firebase.messaging.r rVar2 = new com.google.firebase.messaging.r(7, a0.DUMP, byteArray, arrayList2, arrayList3);
                                                        bufferedReader.close();
                                                        rVar = rVar2;
                                                    }
                                                }
                                            }
                                        } finally {
                                        }
                                    } catch (Throwable th3) {
                                        sentryAndroidOptions.getLogger().k(SentryLevel.WARNING, "Failed to parse ANR thread dump", th3);
                                        rVar = new com.google.firebase.messaging.r(a0.ERROR, byteArray);
                                    }
                                }
                            }
                        } finally {
                        }
                    }
                    a0 a0Var = (a0) rVar.f6259e;
                    if (a0Var == a0.NO_DUMP) {
                        sentryAndroidOptions.getLogger().u(SentryLevel.WARNING, "Not reporting ANR event as there was no thread dump for the ANR %s", applicationExitInfo.toString());
                        return null;
                    }
                    y yVar = new y(sentryAndroidOptions.getFlushTimeoutMillis(), sentryAndroidOptions.getLogger(), timestamp, z5, z6);
                    Hint q5 = a5.k0.q(yVar);
                    SentryEvent sentryEvent = new SentryEvent();
                    if (a0Var == a0.ERROR) {
                        io.sentry.protocol.n nVar = new io.sentry.protocol.n();
                        nVar.f11842d = "Sentry Android SDK failed to parse system thread dump for this ANR. We recommend enabling [SentryOptions.isAttachAnrThreadDump] option to attach the thread dump as plain text and report this issue on GitHub.";
                        sentryEvent.N = nVar;
                    } else if (a0Var == a0.DUMP) {
                        sentryEvent.P = new e6((List) rVar.f6261v);
                        ArrayList arrayList4 = (ArrayList) rVar.f6262w;
                        if (arrayList4 != null) {
                            io.sentry.protocol.d dVar = new io.sentry.protocol.d();
                            dVar.f11773e = new ArrayList(arrayList4);
                            sentryEvent.K = dVar;
                        }
                    }
                    sentryEvent.R = SentryLevel.FATAL;
                    sentryEvent.M = ki.b.s(timestamp);
                    if (sentryAndroidOptions.isAttachAnrThreadDump() && (bArr = (byte[]) rVar.f6260i) != null) {
                        q5.f10984f = new io.sentry.a(bArr);
                    }
                    return new e4.m(sentryEvent, q5, yVar, 26);
                } finally {
                }
            default:
                SentryAndroidOptions sentryAndroidOptions2 = this.f11363b;
                try {
                    InputStream traceInputStream2 = applicationExitInfo.getTraceInputStream();
                    if (traceInputStream2 == null) {
                        sentryAndroidOptions2.getLogger().u(SentryLevel.WARNING, "No tombstone InputStream available for ApplicationExitInfo from %s", DateTimeFormatter.ISO_INSTANT.format(Instant.ofEpochMilli(applicationExitInfo.getTimestamp())));
                        return null;
                    }
                    io.sentry.android.core.internal.tombstone.a aVar2 = new io.sentry.android.core.internal.tombstone.a(traceInputStream2);
                    try {
                        SentryEvent f2 = aVar2.f();
                        aVar2.close();
                        long timestamp2 = applicationExitInfo.getTimestamp();
                        f2.M = ki.b.s(timestamp2);
                        k1 k1Var = new k1(sentryAndroidOptions2.getFlushTimeoutMillis(), sentryAndroidOptions2.getLogger(), timestamp2, z5);
                        return new e4.m(f2, a5.k0.q(k1Var), k1Var, 26);
                    } finally {
                    }
                } catch (Throwable th4) {
                    sentryAndroidOptions2.getLogger().u(SentryLevel.WARNING, "Failed to parse tombstone from %s: %s", DateTimeFormatter.ISO_INSTANT.format(Instant.ofEpochMilli(applicationExitInfo.getTimestamp())), th4.getMessage());
                    return null;
                }
        }
    }

    @Override // io.sentry.android.core.h0
    public final String getLabel() {
        switch (this.a) {
            case 0:
                return "ANR";
            default:
                return "Tombstone";
        }
    }
}
