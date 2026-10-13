package t1;

import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.os.CancellationSignal;
import android.os.Parcel;
import android.os.ResultReceiver;
import com.discord.key_commands.KeyCommandDescriptor;
import java.util.Set;
import java.util.concurrent.Executor;
import kotlin.collections.x;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import n1.h;

/* loaded from: classes.dex */
public abstract class d {
    public static final a a = new a();

    /* renamed from: b, reason: collision with root package name */
    public static final Set f18155b;

    /* renamed from: c, reason: collision with root package name */
    public static final int f18156c;

    /* renamed from: d, reason: collision with root package name */
    public static final /* synthetic */ int f18157d = 0;

    static {
        Integer[] elements = {7, 20};
        Intrinsics.checkNotNullParameter(elements, "elements");
        f18155b = x.J(elements);
        f18156c = 1;
    }

    public d(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(context, "context");
    }

    public static void a(ResultReceiver resultReceiver, Intent hiddenIntent, String typeTag) {
        Intrinsics.checkNotNullParameter(resultReceiver, "resultReceiver");
        Intrinsics.checkNotNullParameter(hiddenIntent, "hiddenIntent");
        Intrinsics.checkNotNullParameter(typeTag, "typeTag");
        hiddenIntent.putExtra("TYPE", typeTag);
        hiddenIntent.putExtra("ACTIVITY_REQUEST_CODE", f18156c);
        hiddenIntent.putExtra("RESULT_RECEIVER", d(resultReceiver));
        hiddenIntent.setFlags(KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT);
    }

    public static boolean b(Bundle resultData, Function2 conversionFn, Executor executor, h callback, CancellationSignal cancellationSignal) {
        Intrinsics.checkNotNullParameter(resultData, "resultData");
        Intrinsics.checkNotNullParameter(conversionFn, "conversionFn");
        Intrinsics.checkNotNullParameter(executor, "executor");
        Intrinsics.checkNotNullParameter(callback, "callback");
        if (!resultData.getBoolean("FAILURE_RESPONSE")) {
            return false;
        }
        c.a(cancellationSignal, new com.discord.chat.presentation.list.delegate.c(executor, callback, conversionFn.invoke(resultData.getString("EXCEPTION_TYPE"), resultData.getString("EXCEPTION_MESSAGE")), 6));
        return true;
    }

    /* JADX WARN: Type inference failed for: r1v0, types: [T, o1.h] */
    /* JADX WARN: Type inference failed for: r4v4, types: [T, o1.b] */
    public static final boolean c(int i5, Function2 cancelOnError, Function1 onError, CancellationSignal cancellationSignal) {
        Intrinsics.checkNotNullParameter(cancelOnError, "cancelOnError");
        Intrinsics.checkNotNullParameter(onError, "onError");
        if (i5 == -1) {
            return false;
        }
        Ref.ObjectRef objectRef = new Ref.ObjectRef();
        objectRef.element = new o1.h(s4.h.e(i5, "activity with result code: ", " indicating not RESULT_OK"));
        if (i5 == 0) {
            objectRef.element = new o1.b("activity is cancelled by the user.");
        }
        cancelOnError.invoke(cancellationSignal, new b(onError, objectRef, 0));
        return true;
    }

    public static ResultReceiver d(ResultReceiver resultReceiver) {
        Parcel obtain = Parcel.obtain();
        Intrinsics.checkNotNullExpressionValue(obtain, "obtain(...)");
        Intrinsics.checkNotNull(resultReceiver);
        resultReceiver.writeToParcel(obtain, 0);
        obtain.setDataPosition(0);
        ResultReceiver resultReceiver2 = (ResultReceiver) ResultReceiver.CREATOR.createFromParcel(obtain);
        obtain.recycle();
        return resultReceiver2;
    }
}
