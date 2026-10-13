package g;

import android.content.ClipData;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.content.pm.ResolveInfo;
import android.net.Uri;
import android.provider.MediaStore;
import androidx.activity.result.contract.ActivityResultContract;
import f.i;
import java.util.ArrayList;
import java.util.LinkedHashSet;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class a extends ActivityResultContract {
    public final int a;

    public a(int i5) {
        this.a = i5;
        if (i5 <= 1) {
            throw new IllegalArgumentException("Max items must be higher than 1");
        }
    }

    @Override // androidx.activity.result.contract.ActivityResultContract
    public final u4.b b(Context context, Object obj) {
        i input = (i) obj;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(input, "input");
        return null;
    }

    @Override // androidx.activity.result.contract.ActivityResultContract
    public final Object c(int i5, Intent intent) {
        Object arrayList;
        if (i5 != -1) {
            intent = null;
        }
        if (intent != null) {
            Intrinsics.checkNotNullParameter(intent, "<this>");
            LinkedHashSet linkedHashSet = new LinkedHashSet();
            Uri data = intent.getData();
            if (data != null) {
                linkedHashSet.add(data);
            }
            ClipData clipData = intent.getClipData();
            if (clipData == null && linkedHashSet.isEmpty()) {
                arrayList = m0.f13512d;
            } else {
                if (clipData != null) {
                    int itemCount = clipData.getItemCount();
                    for (int i6 = 0; i6 < itemCount; i6++) {
                        Uri uri = clipData.getItemAt(i6).getUri();
                        if (uri != null) {
                            linkedHashSet.add(uri);
                        }
                    }
                }
                arrayList = new ArrayList(linkedHashSet);
            }
            if (arrayList != null) {
                return arrayList;
            }
        }
        return m0.f13512d;
    }

    @Override // androidx.activity.result.contract.ActivityResultContract
    /* renamed from: d, reason: merged with bridge method [inline-methods] */
    public final Intent a(Context context, i input) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(input, "input");
        boolean j = z0.d.j();
        int i5 = this.a;
        if (j) {
            Intent intent = new Intent("android.provider.action.PICK_IMAGES");
            intent.setType(z0.d.i(input.a));
            int min = Math.min(i5, input.f8302b);
            if (min <= 1 || min > MediaStore.getPickImagesMaxLimit()) {
                throw new IllegalArgumentException("Max items must be greater than 1 and lesser than or equal to MediaStore.getPickImagesMaxLimit()");
            }
            intent.putExtra("android.provider.extra.PICK_IMAGES_MAX", min);
            input.f8303c.getClass();
            intent.putExtra("android.provider.extra.PICK_IMAGES_LAUNCH_TAB", 1);
            intent.putExtra("android.provider.extra.PICK_IMAGES_IN_ORDER", false);
            return intent;
        }
        Intrinsics.checkNotNullParameter(context, "context");
        if (z0.d.h(context) == null) {
            Intent intent2 = new Intent("android.intent.action.OPEN_DOCUMENT");
            intent2.setType(z0.d.i(input.a));
            intent2.putExtra("android.intent.extra.ALLOW_MULTIPLE", true);
            if (intent2.getType() == null) {
                intent2.setType("*/*");
                intent2.putExtra("android.intent.extra.MIME_TYPES", new String[]{"image/*", "video/*"});
            }
            return intent2;
        }
        ResolveInfo h6 = z0.d.h(context);
        if (h6 == null) {
            throw new IllegalStateException("Required value was null.");
        }
        ActivityInfo activityInfo = h6.activityInfo;
        Intent intent3 = new Intent("androidx.activity.result.contract.action.PICK_IMAGES");
        intent3.setClassName(activityInfo.applicationInfo.packageName, activityInfo.name);
        intent3.setType(z0.d.i(input.a));
        int min2 = Math.min(i5, input.f8302b);
        if (min2 <= 1) {
            throw new IllegalArgumentException("Max items must be greater than 1");
        }
        intent3.putExtra("androidx.activity.result.contract.extra.PICK_IMAGES_MAX", min2);
        input.f8303c.getClass();
        intent3.putExtra("androidx.activity.result.contract.extra.PICK_IMAGES_LAUNCH_TAB", 1);
        intent3.putExtra("androidx.activity.result.contract.extra.PICK_IMAGES_IN_ORDER", false);
        return intent3;
    }
}
