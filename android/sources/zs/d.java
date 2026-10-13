package zs;

import android.util.Log;
import java.util.concurrent.CopyOnWriteArraySet;
import java.util.logging.Handler;
import java.util.logging.Level;
import java.util.logging.LogRecord;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlin.text.b0;

/* loaded from: classes3.dex */
public final class d extends Handler {
    public static final d a = new d();

    @Override // java.util.logging.Handler
    public final void publish(LogRecord record) {
        int min;
        Intrinsics.checkNotNullParameter(record, "record");
        CopyOnWriteArraySet copyOnWriteArraySet = c.a;
        String loggerName = record.getLoggerName();
        Intrinsics.checkNotNullExpressionValue(loggerName, "record.loggerName");
        int intValue = record.getLevel().intValue();
        Level level = Level.INFO;
        int i5 = intValue > level.intValue() ? 5 : record.getLevel().intValue() == level.intValue() ? 4 : 3;
        String message = record.getMessage();
        Intrinsics.checkNotNullExpressionValue(message, "record.message");
        Throwable thrown = record.getThrown();
        Intrinsics.checkNotNullParameter(loggerName, "loggerName");
        Intrinsics.checkNotNullParameter(message, "message");
        String str = (String) c.f21439b.get(loggerName);
        if (str == null) {
            str = b0.B(23, loggerName);
        }
        if (Log.isLoggable(str, i5)) {
            if (thrown != null) {
                message = message + '\n' + ((Object) Log.getStackTraceString(thrown));
            }
            int length = message.length();
            int i6 = 0;
            while (i6 < length) {
                int I = StringsKt.I(message, '\n', i6, 4);
                if (I == -1) {
                    I = length;
                }
                while (true) {
                    min = Math.min(I, i6 + 4000);
                    String substring = message.substring(i6, min);
                    Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String…ing(startIndex, endIndex)");
                    Log.println(i5, str, substring);
                    if (min >= I) {
                        break;
                    } else {
                        i6 = min;
                    }
                }
                i6 = min + 1;
            }
        }
    }

    @Override // java.util.logging.Handler
    public final void close() {
    }

    @Override // java.util.logging.Handler
    public final void flush() {
    }
}
