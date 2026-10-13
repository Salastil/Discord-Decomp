package com.discord.resource_usage.utils;

import a3.e;
import android.os.Process;
import com.discord.jank_stats.JankRecordStore;
import com.discord.resource_usage.utils.ProcfsStats;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import fo.l;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.InputStreamReader;
import java.util.List;
import k0.d;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.Charsets;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;
import qs.b;
import s4.h;
import u7.a;

@Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\t\n\u0002\b\n\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0080\b\u0018\u0000 \u00142\u00020\u0001:\u0001\u0014B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003¢\u0006\u0004\b\u0005\u0010\u0006J\t\u0010\n\u001a\u00020\u0003HÆ\u0003J\t\u0010\u000b\u001a\u00020\u0003HÆ\u0003J\u001d\u0010\f\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0003HÆ\u0001J\u0013\u0010\r\u001a\u00020\u000e2\b\u0010\u000f\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0010\u001a\u00020\u0011HÖ\u0001J\t\u0010\u0012\u001a\u00020\u0013HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\b¨\u0006\u0015"}, d2 = {"Lcom/discord/resource_usage/utils/ProcfsStats;", "", "totalTime", "", "rssPages", "<init>", "(JJ)V", "getTotalTime", "()J", "getRssPages", "component1", "component2", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "", "toString", "", "Companion", "resource_usage_monitor_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class ProcfsStats {
    private static final ThreadLocal<char[]> readBuffer;
    private final long rssPages;
    private final long totalTime;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final Lazy statFile$delegate = l.a(new a(3));

    @Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\u0010\u0019\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\b\u0010\u000e\u001a\u0004\u0018\u00010\u000fJ\u000e\u0010\u0010\u001a\u0004\u0018\u00010\u000f*\u00020\u0005H\u0002R\u001b\u0010\u0004\u001a\u00020\u00058BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\b\u0010\t\u001a\u0004\b\u0006\u0010\u0007R2\u0010\n\u001a&\u0012\f\u0012\n \r*\u0004\u0018\u00010\f0\f \r*\u0012\u0012\f\u0012\n \r*\u0004\u0018\u00010\f0\f\u0018\u00010\u000b0\u000bX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0011"}, d2 = {"Lcom/discord/resource_usage/utils/ProcfsStats$Companion;", "", "<init>", "()V", "statFile", "Ljava/io/File;", "getStatFile", "()Ljava/io/File;", "statFile$delegate", "Lkotlin/Lazy;", "readBuffer", "Ljava/lang/ThreadLocal;", "", "kotlin.jvm.PlatformType", "readStatFile", "Lcom/discord/resource_usage/utils/ProcfsStats;", "parsePidStats", "resource_usage_monitor_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    @SourceDebugExtension({"SMAP\nProcfsStats.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ProcfsStats.kt\ncom/discord/resource_usage/utils/ProcfsStats$Companion\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,74:1\n1#2:75\n*E\n"})
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private final File getStatFile() {
            return (File) ProcfsStats.statFile$delegate.getValue();
        }

        /* JADX WARN: Code restructure failed: missing block: B:41:0x0049, code lost:
        
            r2 = r2.toString();
         */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        private final ProcfsStats parsePidStats(File file) {
            String sb2;
            long j;
            long j5;
            try {
                if (file.exists()) {
                    BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new FileInputStream(file), Charsets.UTF_8), 8192);
                    try {
                        StringBuilder sb3 = new StringBuilder();
                        Object obj = ProcfsStats.readBuffer.get();
                        Intrinsics.checkNotNull(obj);
                        char[] cArr = (char[]) obj;
                        int i5 = 0;
                        while (true) {
                            int read = bufferedReader.read(cArr);
                            if (read == -1) {
                                break;
                            }
                            i5 += read;
                            if (i5 > 1048576) {
                                sb2 = null;
                                break;
                            }
                            sb3.append(cArr, 0, read);
                            Intrinsics.checkNotNullExpressionValue(sb3, "append(...)");
                        }
                        bufferedReader.close();
                        if (sb2 != null && sb2.length() > 0) {
                            List S = StringsKt.S(sb2, new char[]{' '});
                            String str = (String) S.get(13);
                            byte[] bArr = b.a;
                            Intrinsics.checkNotNullParameter(str, "<this>");
                            long j7 = 0;
                            try {
                                j = Long.parseLong(str);
                            } catch (NumberFormatException unused) {
                                j = 0;
                            }
                            String str2 = (String) S.get(14);
                            Intrinsics.checkNotNullParameter(str2, "<this>");
                            try {
                                j5 = Long.parseLong(str2);
                            } catch (NumberFormatException unused2) {
                                j5 = 0;
                            }
                            String str3 = (String) S.get(23);
                            Intrinsics.checkNotNullParameter(str3, "<this>");
                            try {
                                j7 = Long.parseLong(str3);
                            } catch (NumberFormatException unused3) {
                            }
                            return new ProcfsStats(j + j5, j7);
                        }
                    } finally {
                    }
                }
            } catch (Exception unused4) {
            }
            return null;
        }

        public final ProcfsStats readStatFile() {
            return parsePidStats(getStatFile());
        }

        private Companion() {
        }
    }

    static {
        final x7.a aVar = new x7.a();
        readBuffer = new ThreadLocal() { // from class: x7.b
            @Override // java.lang.ThreadLocal
            public final Object initialValue() {
                char[] readBuffer$lambda$1;
                a.this.getClass();
                readBuffer$lambda$1 = ProcfsStats.readBuffer$lambda$1();
                return readBuffer$lambda$1;
            }
        };
    }

    public ProcfsStats(long j, long j5) {
        this.totalTime = j;
        this.rssPages = j5;
    }

    public static /* synthetic */ ProcfsStats copy$default(ProcfsStats procfsStats, long j, long j5, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            j = procfsStats.totalTime;
        }
        if ((i5 & 2) != 0) {
            j5 = procfsStats.rssPages;
        }
        return procfsStats.copy(j, j5);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final char[] readBuffer$lambda$1() {
        return new char[IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET];
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final File statFile_delegate$lambda$0() {
        return new File(h.e(Process.myPid(), "/proc/", "/stat"));
    }

    /* renamed from: component1, reason: from getter */
    public final long getTotalTime() {
        return this.totalTime;
    }

    /* renamed from: component2, reason: from getter */
    public final long getRssPages() {
        return this.rssPages;
    }

    @NotNull
    public final ProcfsStats copy(long totalTime, long rssPages) {
        return new ProcfsStats(totalTime, rssPages);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ProcfsStats)) {
            return false;
        }
        ProcfsStats procfsStats = (ProcfsStats) other;
        return this.totalTime == procfsStats.totalTime && this.rssPages == procfsStats.rssPages;
    }

    public final long getRssPages() {
        return this.rssPages;
    }

    public final long getTotalTime() {
        return this.totalTime;
    }

    public int hashCode() {
        return Long.hashCode(this.rssPages) + (Long.hashCode(this.totalTime) * 31);
    }

    @NotNull
    public String toString() {
        long j = this.totalTime;
        return e.m(d.n(j, "ProcfsStats(totalTime=", ", rssPages="), this.rssPages, ")");
    }
}
