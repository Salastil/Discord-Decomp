package n1;

import android.os.Bundle;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public class n extends bq.b {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public n(int i5, String type, Bundle data) {
        super(type, data);
        switch (i5) {
            case 1:
                super("android.credentials.TYPE_PASSWORD_CREDENTIAL", data);
                if (type.length() <= 0) {
                    throw new IllegalArgumentException("password should not be empty");
                }
                return;
            default:
                Intrinsics.checkNotNullParameter(type, "type");
                Intrinsics.checkNotNullParameter(data, "data");
                if (type.length() <= 0) {
                    throw new IllegalArgumentException("type should not be empty");
                }
                return;
        }
    }
}
