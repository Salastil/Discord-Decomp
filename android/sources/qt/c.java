package qt;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.PrintWriter;
import java.io.StringWriter;
import java.io.Writer;
import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes4.dex */
public abstract class c {

    @NotNull
    private final ThreadLocal<String> explicitTag = new ThreadLocal<>();

    public final void a(int i5, Throwable th2, String str, Object... objArr) {
        String tag$timber_release = getTag$timber_release();
        if (isLoggable(tag$timber_release, i5)) {
            if (str != null && str.length() != 0) {
                if (objArr.length != 0) {
                    str = formatMessage(str, objArr);
                }
                if (th2 != null) {
                    StringBuilder sb2 = new StringBuilder();
                    sb2.append((Object) str);
                    sb2.append('\n');
                    StringWriter stringWriter = new StringWriter(IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER);
                    PrintWriter printWriter = new PrintWriter((Writer) stringWriter, false);
                    th2.printStackTrace(printWriter);
                    printWriter.flush();
                    String stringWriter2 = stringWriter.toString();
                    Intrinsics.checkNotNullExpressionValue(stringWriter2, "sw.toString()");
                    sb2.append(stringWriter2);
                    str = sb2.toString();
                }
            } else {
                if (th2 == null) {
                    return;
                }
                StringWriter stringWriter3 = new StringWriter(IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER);
                PrintWriter printWriter2 = new PrintWriter((Writer) stringWriter3, false);
                th2.printStackTrace(printWriter2);
                printWriter2.flush();
                str = stringWriter3.toString();
                Intrinsics.checkNotNullExpressionValue(str, "sw.toString()");
            }
            log(i5, tag$timber_release, str, th2);
        }
    }

    public void d(String str, @NotNull Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        a(3, null, str, Arrays.copyOf(args, args.length));
    }

    public void e(String str, @NotNull Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        a(6, null, str, Arrays.copyOf(args, args.length));
    }

    @NotNull
    public String formatMessage(@NotNull String message, @NotNull Object[] args) {
        Intrinsics.checkNotNullParameter(message, "message");
        Intrinsics.checkNotNullParameter(args, "args");
        Object[] copyOf = Arrays.copyOf(args, args.length);
        String format = String.format(message, Arrays.copyOf(copyOf, copyOf.length));
        Intrinsics.checkNotNullExpressionValue(format, "java.lang.String.format(this, *args)");
        return format;
    }

    public final /* synthetic */ ThreadLocal getExplicitTag$timber_release() {
        return this.explicitTag;
    }

    public /* synthetic */ String getTag$timber_release() {
        String str = this.explicitTag.get();
        if (str != null) {
            this.explicitTag.remove();
        }
        return str;
    }

    public void i(String str, @NotNull Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        a(4, null, str, Arrays.copyOf(args, args.length));
    }

    @fo.d
    public boolean isLoggable(int i5) {
        return true;
    }

    public abstract void log(int i5, String str, String str2, Throwable th2);

    public void log(int i5, String str, @NotNull Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        a(i5, null, str, Arrays.copyOf(args, args.length));
    }

    public void v(String str, @NotNull Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        a(2, null, str, Arrays.copyOf(args, args.length));
    }

    public void w(String str, @NotNull Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        a(5, null, str, Arrays.copyOf(args, args.length));
    }

    public void wtf(String str, @NotNull Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        a(7, null, str, Arrays.copyOf(args, args.length));
    }

    public void d(Throwable th2, String str, @NotNull Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        a(3, th2, str, Arrays.copyOf(args, args.length));
    }

    public void e(Throwable th2, String str, @NotNull Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        a(6, th2, str, Arrays.copyOf(args, args.length));
    }

    public void i(Throwable th2, String str, @NotNull Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        a(4, th2, str, Arrays.copyOf(args, args.length));
    }

    public boolean isLoggable(String str, int i5) {
        return isLoggable(i5);
    }

    public void log(int i5, Throwable th2, String str, @NotNull Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        a(i5, th2, str, Arrays.copyOf(args, args.length));
    }

    public void v(Throwable th2, String str, @NotNull Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        a(2, th2, str, Arrays.copyOf(args, args.length));
    }

    public void w(Throwable th2, String str, @NotNull Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        a(5, th2, str, Arrays.copyOf(args, args.length));
    }

    public void wtf(Throwable th2, String str, @NotNull Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        a(7, th2, str, Arrays.copyOf(args, args.length));
    }

    public void d(Throwable th2) {
        a(3, th2, null, new Object[0]);
    }

    public void e(Throwable th2) {
        a(6, th2, null, new Object[0]);
    }

    public void i(Throwable th2) {
        a(4, th2, null, new Object[0]);
    }

    public void log(int i5, Throwable th2) {
        a(i5, th2, null, new Object[0]);
    }

    public void v(Throwable th2) {
        a(2, th2, null, new Object[0]);
    }

    public void w(Throwable th2) {
        a(5, th2, null, new Object[0]);
    }

    public void wtf(Throwable th2) {
        a(7, th2, null, new Object[0]);
    }
}
