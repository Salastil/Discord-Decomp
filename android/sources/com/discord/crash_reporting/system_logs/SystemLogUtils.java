package com.discord.crash_reporting.system_logs;

import a3.e;
import android.annotation.SuppressLint;
import android.content.Context;
import android.util.Log;
import bs.e1;
import com.discord.chat.presentation.message.view.y;
import com.discord.chat.presentation.textutils.c;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import java.io.BufferedReader;
import java.io.File;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.security.MessageDigest;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.NoSuchElementException;
import java.util.concurrent.TimeUnit;
import java.util.regex.Pattern;
import k6.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.d;
import kotlin.collections.f;
import kotlin.collections.u0;
import kotlin.collections.x;
import kotlin.collections.z0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.Charsets;
import kotlin.text.MatchResult;
import kotlin.text.Regex;
import kotlin.text.StringsKt;
import kotlin.text.m;
import kotlin.text.n;
import kotlin.text.o;
import kotlin.text.p;
import kr.s;
import kr.t;
import org.jetbrains.annotations.NotNull;
import s4.h;

@Metadata(d1 = {"\u0000d\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u001e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0002\bÀ\u0002\u0018\u00002\u00020\u0001:\u0001)B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0013\u001a\u00020\u00052\u0006\u0010\u0014\u001a\u00020\u0015J\u0010\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0014\u001a\u00020\u0015H\u0007J\u001c\u0010\u0018\u001a\u00020\u00172\u0014\u0010\u0019\u001a\u0010\u0012\u0006\u0012\u0004\u0018\u00010\u001b\u0012\u0004\u0012\u00020\u00170\u001aJ\u0018\u0010\u0018\u001a\u0004\u0018\u00010\u001b2\f\u0010\u001c\u001a\b\u0012\u0004\u0012\u00020\u00050\u001dH\u0002J(\u0010\u001e\u001a\u00020\u00172\u0006\u0010\u001f\u001a\u00020 2\f\u0010!\u001a\b\u0012\u0004\u0012\u00020\u00050\"2\b\u0010#\u001a\u0004\u0018\u00010\u000fH\u0002J,\u0010\u0013\u001a\u00020\u00172\b\u0010#\u001a\u0004\u0018\u00010\u000f2\u0018\u0010\u0019\u001a\u0014\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00050\"\u0012\u0004\u0012\u00020\u00170\u001aH\u0002J\u0010\u0010$\u001a\u00020\u00052\u0006\u0010%\u001a\u00020\u0005H\u0002J\u0010\u0010&\u001a\u00020\u00172\u0006\u0010'\u001a\u00020(H\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0080T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\u000e\u001a\u00020\u000fX\u0080\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0010\u0010\u0003\u001a\u0004\b\u0011\u0010\u0012¨\u0006*"}, d2 = {"Lcom/discord/crash_reporting/system_logs/SystemLogUtils;", "", "<init>", "()V", "LOGCAT_PATH", "", "debugPrintables", "Lcom/discord/crash_reporting/system_logs/DebugPrintableCollection;", "MAX_LOG_SIZE", "", "LIBDISCORD_VERSION_CATEGORY", "DEFAULT_TAG", "systemLogCapture", "Lcom/discord/crash_reporting/system_logs/SystemLogCapture;", "regexExtractTombstone", "Lkotlin/text/Regex;", "getRegexExtractTombstone$crash_reporting_release$annotations", "getRegexExtractTombstone$crash_reporting_release", "()Lkotlin/text/Regex;", "fetch", "context", "Landroid/content/Context;", "initSystemLogCapture", "", "fetchLastTombstone", "cb", "Lkotlin/Function1;", "Lcom/discord/crash_reporting/system_logs/SystemLogUtils$Tombstone;", "crashes", "", "processLogs", "reader", "Ljava/io/BufferedReader;", "output", "Ljava/util/LinkedList;", ViewProps.FILTER, "hashString", "input", "waitFor", "process", "Ljava/lang/Process;", "Tombstone", "crash_reporting_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nSystemLogUtils.kt\nKotlin\n*S Kotlin\n*F\n+ 1 SystemLogUtils.kt\ncom/discord/crash_reporting/system_logs/SystemLogUtils\n+ 2 _Sequences.kt\nkotlin/sequences/SequencesKt___SequencesKt\n+ 3 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 4 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n*L\n1#1,234:1\n127#2,2:235\n461#3,6:237\n13472#4,2:243\n*S KotlinDebug\n*F\n+ 1 SystemLogUtils.kt\ncom/discord/crash_reporting/system_logs/SystemLogUtils\n*L\n118#1:235,2\n149#1:237,6\n206#1:243,2\n*E\n"})
/* loaded from: classes.dex */
public final class SystemLogUtils {

    @NotNull
    private static final String DEFAULT_TAG = "Discord";

    @NotNull
    private static final String LIBDISCORD_VERSION_CATEGORY = "libdiscord_version";

    @NotNull
    public static final String LOGCAT_PATH = "/system/bin/logcat";
    private static final int MAX_LOG_SIZE = 2500000;

    @NotNull
    private static final Regex regexExtractTombstone;

    @NotNull
    public static final SystemLogUtils INSTANCE = new SystemLogUtils();

    @NotNull
    private static final DebugPrintableCollection debugPrintables = new DebugPrintableCollection();

    @NotNull
    private static final SystemLogCapture systemLogCapture = new SystemLogCapture();

    @Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0016\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001B9\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0003\u0012\u0006\u0010\u0007\u001a\u00020\u0003\u0012\u0006\u0010\b\u001a\u00020\u0003¢\u0006\u0004\b\t\u0010\nJ\t\u0010\u0012\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\u0013\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\t\u0010\u0014\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0015\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0016\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0017\u001a\u00020\u0003HÆ\u0003JG\u0010\u0018\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00032\b\b\u0002\u0010\u0006\u001a\u00020\u00032\b\b\u0002\u0010\u0007\u001a\u00020\u00032\b\b\u0002\u0010\b\u001a\u00020\u0003HÆ\u0001J\u0013\u0010\u0019\u001a\u00020\u001a2\b\u0010\u001b\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001c\u001a\u00020\u001dHÖ\u0001J\t\u0010\u001e\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\fR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\fR\u0011\u0010\u0005\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\fR\u0011\u0010\u0006\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\fR\u0011\u0010\u0007\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\fR\u0011\u0010\b\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\f¨\u0006\u001f"}, d2 = {"Lcom/discord/crash_reporting/system_logs/SystemLogUtils$Tombstone;", "", "text", "", "cause", "groupBy", "origin", "groupHash", "textHash", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "getText", "()Ljava/lang/String;", "getCause", "getGroupBy", "getOrigin", "getGroupHash", "getTextHash", "component1", "component2", "component3", "component4", "component5", "component6", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "", "toString", "crash_reporting_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class Tombstone {
        private final String cause;

        @NotNull
        private final String groupBy;

        @NotNull
        private final String groupHash;

        @NotNull
        private final String origin;

        @NotNull
        private final String text;

        @NotNull
        private final String textHash;

        public Tombstone(@NotNull String text, String str, @NotNull String groupBy, @NotNull String origin, @NotNull String groupHash, @NotNull String textHash) {
            Intrinsics.checkNotNullParameter(text, "text");
            Intrinsics.checkNotNullParameter(groupBy, "groupBy");
            Intrinsics.checkNotNullParameter(origin, "origin");
            Intrinsics.checkNotNullParameter(groupHash, "groupHash");
            Intrinsics.checkNotNullParameter(textHash, "textHash");
            this.text = text;
            this.cause = str;
            this.groupBy = groupBy;
            this.origin = origin;
            this.groupHash = groupHash;
            this.textHash = textHash;
        }

        public static /* synthetic */ Tombstone copy$default(Tombstone tombstone, String str, String str2, String str3, String str4, String str5, String str6, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                str = tombstone.text;
            }
            if ((i5 & 2) != 0) {
                str2 = tombstone.cause;
            }
            if ((i5 & 4) != 0) {
                str3 = tombstone.groupBy;
            }
            if ((i5 & 8) != 0) {
                str4 = tombstone.origin;
            }
            if ((i5 & 16) != 0) {
                str5 = tombstone.groupHash;
            }
            if ((i5 & 32) != 0) {
                str6 = tombstone.textHash;
            }
            String str7 = str5;
            String str8 = str6;
            return tombstone.copy(str, str2, str3, str4, str7, str8);
        }

        @NotNull
        /* renamed from: component1, reason: from getter */
        public final String getText() {
            return this.text;
        }

        /* renamed from: component2, reason: from getter */
        public final String getCause() {
            return this.cause;
        }

        @NotNull
        /* renamed from: component3, reason: from getter */
        public final String getGroupBy() {
            return this.groupBy;
        }

        @NotNull
        /* renamed from: component4, reason: from getter */
        public final String getOrigin() {
            return this.origin;
        }

        @NotNull
        /* renamed from: component5, reason: from getter */
        public final String getGroupHash() {
            return this.groupHash;
        }

        @NotNull
        /* renamed from: component6, reason: from getter */
        public final String getTextHash() {
            return this.textHash;
        }

        @NotNull
        public final Tombstone copy(@NotNull String text, String cause, @NotNull String groupBy, @NotNull String origin, @NotNull String groupHash, @NotNull String textHash) {
            Intrinsics.checkNotNullParameter(text, "text");
            Intrinsics.checkNotNullParameter(groupBy, "groupBy");
            Intrinsics.checkNotNullParameter(origin, "origin");
            Intrinsics.checkNotNullParameter(groupHash, "groupHash");
            Intrinsics.checkNotNullParameter(textHash, "textHash");
            return new Tombstone(text, cause, groupBy, origin, groupHash, textHash);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof Tombstone)) {
                return false;
            }
            Tombstone tombstone = (Tombstone) other;
            return Intrinsics.areEqual(this.text, tombstone.text) && Intrinsics.areEqual(this.cause, tombstone.cause) && Intrinsics.areEqual(this.groupBy, tombstone.groupBy) && Intrinsics.areEqual(this.origin, tombstone.origin) && Intrinsics.areEqual(this.groupHash, tombstone.groupHash) && Intrinsics.areEqual(this.textHash, tombstone.textHash);
        }

        public final String getCause() {
            return this.cause;
        }

        @NotNull
        public final String getGroupBy() {
            return this.groupBy;
        }

        @NotNull
        public final String getGroupHash() {
            return this.groupHash;
        }

        @NotNull
        public final String getOrigin() {
            return this.origin;
        }

        @NotNull
        public final String getText() {
            return this.text;
        }

        @NotNull
        public final String getTextHash() {
            return this.textHash;
        }

        public int hashCode() {
            int hashCode = this.text.hashCode() * 31;
            String str = this.cause;
            return this.textHash.hashCode() + e.d(e.d(e.d((hashCode + (str == null ? 0 : str.hashCode())) * 31, 31, this.groupBy), 31, this.origin), 31, this.groupHash);
        }

        @NotNull
        public String toString() {
            String str = this.text;
            String str2 = this.cause;
            String str3 = this.groupBy;
            String str4 = this.origin;
            String str5 = this.groupHash;
            String str6 = this.textHash;
            StringBuilder t5 = e.t("Tombstone(text=", str, ", cause=", str2, ", groupBy=");
            e.A(t5, str3, ", origin=", str4, ", groupHash=");
            return com.discord.chat.bridge.botuikit.a.k(t5, str5, ", textHash=", str6, ")");
        }
    }

    static {
        Regex.f13559e.getClass();
        Intrinsics.checkNotNullParameter(LIBDISCORD_VERSION_CATEGORY, "literal");
        String quote = Pattern.quote(LIBDISCORD_VERSION_CATEGORY);
        Intrinsics.checkNotNullExpressionValue(quote, "quote(...)");
        regexExtractTombstone = new Regex(h.f("(?:^(?:[^\\s]+\\s+){4}F\\s+DEBUG\\s+:\\s(.+))|(^.+(\\[", quote, "\\].+))"));
    }

    private SystemLogUtils() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code restructure failed: missing block: B:21:0x0084, code lost:
    
        if (r1 != null) goto L4;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final Unit fetch$lambda$6(LinkedList linkedList, Regex regex, boolean z5, Function1 function1) {
        Process process = null;
        try {
            try {
                process = new ProcessBuilder(LOGCAT_PATH, "-d").redirectErrorStream(true).start();
                SystemLogUtils systemLogUtils = INSTANCE;
                Intrinsics.checkNotNull(process);
                systemLogUtils.waitFor(process);
                InputStream inputStream = process.getInputStream();
                Intrinsics.checkNotNullExpressionValue(inputStream, "getInputStream(...)");
                BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(inputStream, Charsets.UTF_8), 8192);
                systemLogUtils.processLogs(bufferedReader, linkedList, regex);
                bufferedReader.close();
            } catch (Exception e9) {
                e9.printStackTrace();
                if (z5) {
                    linkedList.add("Exception getting system logs '" + e9 + "'");
                    StackTraceElement[] stackTrace = e9.getStackTrace();
                    Intrinsics.checkNotNullExpressionValue(stackTrace, "getStackTrace(...)");
                    for (StackTraceElement stackTraceElement : stackTrace) {
                        linkedList.add("    " + stackTraceElement);
                    }
                }
            }
            process.destroy();
            function1.invoke(linkedList);
            return Unit.a;
        } catch (Throwable th2) {
            if (process != null) {
                process.destroy();
            }
            throw th2;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit fetchLastTombstone$lambda$0(Function1 function1, LinkedList crashes) {
        Intrinsics.checkNotNullParameter(crashes, "crashes");
        function1.invoke(INSTANCE.fetchLastTombstone(crashes));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final String fetchLastTombstone$lambda$2(Regex regex, MatchResult it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return regex.replace((CharSequence) it.a().get(1), "classesN.dex");
    }

    public static /* synthetic */ void getRegexExtractTombstone$crash_reporting_release$annotations() {
    }

    private final String hashString(String input) {
        MessageDigest messageDigest = MessageDigest.getInstance("SHA-1");
        byte[] bytes = input.getBytes(Charsets.UTF_8);
        Intrinsics.checkNotNullExpressionValue(bytes, "getBytes(...)");
        byte[] digest = messageDigest.digest(bytes);
        Intrinsics.checkNotNull(digest);
        return x.z(digest, new c(10));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final CharSequence hashString$lambda$7(byte b10) {
        String format = String.format("%02X", Arrays.copyOf(new Object[]{Byte.valueOf(b10)}, 1));
        Intrinsics.checkNotNullExpressionValue(format, "format(...)");
        return format;
    }

    /* JADX WARN: Code restructure failed: missing block: B:36:0x0049, code lost:
    
        throw new java.util.NoSuchElementException("List contains no element matching the predicate.");
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private final void processLogs(BufferedReader reader, LinkedList<String> output, Regex filter) {
        int i5 = 0;
        loop0: while (true) {
            try {
                String readLine = reader.readLine();
                if (readLine == null) {
                    break;
                }
                if (filter != null) {
                    n nVar = Regex.f13559e;
                    m b10 = filter.b(readLine);
                    if (b10 != null) {
                        Collection a = b10.a();
                        d dVar = new d((f) a, ((kotlin.collections.a) a).a());
                        while (dVar.hasPrevious()) {
                            Object previous = dVar.previous();
                            if (((String) previous).length() > 0) {
                                readLine = (String) previous;
                            }
                        }
                        break loop0;
                    }
                }
                if (!StringsKt.K(readLine) && !StringsKt.D(readLine, "Accessing hidden method", false)) {
                    i5 += readLine.length() + 1;
                    output.add(readLine);
                    if (i5 > MAX_LOG_SIZE) {
                        i5 -= output.pop().length() - 1;
                    }
                }
            } catch (Exception e9) {
                if (filter == null) {
                    output.add("IOException: " + e9);
                }
            }
        }
        if (i5 > MAX_LOG_SIZE) {
            output.pop().getClass();
        }
    }

    private final void waitFor(Process process) {
        long nanos = TimeUnit.SECONDS.toNanos(15L) + System.nanoTime();
        do {
            try {
                process.exitValue();
                return;
            } catch (IllegalThreadStateException unused) {
                Thread.sleep(100L);
            }
        } while (System.nanoTime() < nanos);
    }

    @NotNull
    public final String fetch(@NotNull Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        StringBuilder sb2 = new StringBuilder();
        debugPrintables.debugPrint(context, sb2);
        systemLogCapture.appendOutput(sb2);
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "toString(...)");
        return sb3;
    }

    public final void fetchLastTombstone(@NotNull Function1<? super Tombstone, Unit> cb2) {
        Intrinsics.checkNotNullParameter(cb2, "cb");
        fetch(regexExtractTombstone, new y(cb2, 3));
    }

    @NotNull
    public final Regex getRegexExtractTombstone$crash_reporting_release() {
        return regexExtractTombstone;
    }

    @SuppressLint({"LogNotTimber"})
    public final void initSystemLogCapture(@NotNull Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        Log.v("Discord", "[libdiscord_version]: " + DebugPrintableCollection.INSTANCE.libdiscordVersion(context));
        systemLogCapture.startThread(context);
    }

    private final Tombstone fetchLastTombstone(Collection<String> crashes) {
        String str;
        List a;
        Iterator it;
        String str2 = null;
        if (!crashes.isEmpty()) {
            StringBuilder sb2 = new StringBuilder();
            String str3 = null;
            String str4 = null;
            for (String str5 : crashes) {
                if (StringsKt.D(str5, LIBDISCORD_VERSION_CATEGORY, false)) {
                    str3 = str5;
                } else {
                    if (StringsKt.D(str5, "*** *** *** *** *** *** *** *** *** *** *** *** *** *** *** ***", false)) {
                        Intrinsics.checkNotNullParameter(sb2, "<this>");
                        sb2.setLength(0);
                        str4 = str3;
                    }
                    sb2.append(str5);
                    sb2.append('\n');
                }
            }
            if (!StringsKt.K(sb2)) {
                sb2.append('\n');
                sb2.append("Tombstone's libdiscord_version: ");
                if (str4 == null) {
                    str4 = "Unknown libdiscord_version";
                }
                sb2.append(str4);
                sb2.append('\n');
            }
            String input = sb2.toString();
            Intrinsics.checkNotNullExpressionValue(input, "toString(...)");
            if (!StringsKt.K(input)) {
                p pVar = p.f13588i;
                Regex regex = new Regex("^Cause: (.+)$", pVar);
                Regex regex2 = new Regex("^\\s+#\\d+ pc .+/(.+? .+?)\\+?[+)]", pVar);
                Regex regex3 = new Regex("classes\\d+.dex");
                Intrinsics.checkNotNullParameter(input, "input");
                if (input.length() < 0) {
                    throw new IndexOutOfBoundsException("Start index out of bounds: 0, input length: " + input.length());
                }
                b seedFunction = new b(2, regex2, input);
                o nextFunction = o.f13586d;
                Intrinsics.checkNotNullParameter(seedFunction, "seedFunction");
                Intrinsics.checkNotNullParameter(nextFunction, "nextFunction");
                t n6 = s.n(new kr.e(seedFunction, nextFunction), new e1(14, regex3));
                String[] elements = {"libc.so (abort", "libart.so (art::Runtime::Abort(char const*", "libbase.so (android::base::LogMessage::~LogMessage("};
                Intrinsics.checkNotNullParameter(elements, "elements");
                HashSet hashSet = new HashSet(u0.a(3));
                x.F(elements, hashSet);
                try {
                    it = n6.a.iterator();
                } catch (NoSuchElementException unused) {
                    str = "Unknown";
                }
                while (it.hasNext()) {
                    Object invoke = n6.f13662b.invoke(it.next());
                    if (!hashSet.contains((String) invoke)) {
                        str = (String) invoke;
                        String str6 = str;
                        String m5 = s.m(n6, ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
                        m b10 = regex.b(input);
                        if (b10 != null && (a = b10.a()) != null) {
                            str2 = (String) ((z0) a).get(1);
                        }
                        return new Tombstone(input, str2, m5, str6, hashString(m5), hashString(input));
                    }
                }
                throw new NoSuchElementException("Sequence contains no element matching the predicate.");
            }
        }
        return null;
    }

    private final void fetch(final Regex filter, final Function1<? super LinkedList<String>, Unit> cb2) {
        final LinkedList linkedList = new LinkedList();
        final boolean z5 = filter == null;
        if (!new File(LOGCAT_PATH).exists()) {
            if (z5) {
                linkedList.add("Unable to locate '/system/bin/logcat'");
            }
            cb2.invoke(linkedList);
            return;
        }
        jb.a.M(null, 0, new Function0() { // from class: com.discord.crash_reporting.system_logs.a
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                Unit fetch$lambda$6;
                fetch$lambda$6 = SystemLogUtils.fetch$lambda$6(linkedList, filter, z5, cb2);
                return fetch$lambda$6;
            }
        }, 31);
    }
}
