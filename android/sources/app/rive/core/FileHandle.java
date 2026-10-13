package app.rive.core;

import a3.e;
import com.discord.jank_stats.JankRecordStore;
import kotlin.Metadata;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\t\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\b\u0087@\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u001a\u0010\b\u001a\u00020\t2\b\u0010\n\u001a\u0004\u0018\u00010\u0001HÖ\u0003¢\u0006\u0004\b\u000b\u0010\fJ\u0010\u0010\r\u001a\u00020\u000eHÖ\u0001¢\u0006\u0004\b\u000f\u0010\u0010J\u000f\u0010\u0011\u001a\u00020\u0012H\u0016¢\u0006\u0004\b\u0013\u0010\u0014R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007\u0088\u0001\u0002¨\u0006\u0015"}, d2 = {"Lapp/rive/core/FileHandle;", "", "handle", "", "constructor-impl", "(J)J", "getHandle", "()J", "equals", "", JankRecordStore.SCREEN_OTHER, "equals-impl", "(JLjava/lang/Object;)Z", "hashCode", "", "hashCode-impl", "(J)I", "toString", "", "toString-impl", "(J)Ljava/lang/String;", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public final class FileHandle {
    private final long handle;

    private /* synthetic */ FileHandle(long j) {
        this.handle = j;
    }

    /* renamed from: box-impl, reason: not valid java name */
    public static final /* synthetic */ FileHandle m193boximpl(long j) {
        return new FileHandle(j);
    }

    /* renamed from: constructor-impl, reason: not valid java name */
    public static long m194constructorimpl(long j) {
        return j;
    }

    /* renamed from: equals-impl, reason: not valid java name */
    public static boolean m195equalsimpl(long j, Object obj) {
        return (obj instanceof FileHandle) && j == ((FileHandle) obj).m199unboximpl();
    }

    /* renamed from: equals-impl0, reason: not valid java name */
    public static final boolean m196equalsimpl0(long j, long j5) {
        return j == j5;
    }

    /* renamed from: hashCode-impl, reason: not valid java name */
    public static int m197hashCodeimpl(long j) {
        return Long.hashCode(j);
    }

    @NotNull
    /* renamed from: toString-impl, reason: not valid java name */
    public static String m198toStringimpl(long j) {
        return e.g(j, "FileHandle(", ")");
    }

    public boolean equals(Object obj) {
        return m195equalsimpl(this.handle, obj);
    }

    public final long getHandle() {
        return this.handle;
    }

    public int hashCode() {
        return m197hashCodeimpl(this.handle);
    }

    @NotNull
    public String toString() {
        return m198toStringimpl(this.handle);
    }

    /* renamed from: unbox-impl, reason: not valid java name */
    public final /* synthetic */ long m199unboximpl() {
        return this.handle;
    }
}
