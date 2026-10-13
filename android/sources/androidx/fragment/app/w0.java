package androidx.fragment.app;

import android.content.ClipData;
import android.content.Context;
import android.content.Intent;
import android.content.IntentSender;
import android.content.pm.ActivityInfo;
import android.content.pm.ResolveInfo;
import android.net.Uri;
import android.os.Bundle;
import android.util.Log;
import androidx.activity.result.contract.ActivityResultContract;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class w0 extends ActivityResultContract {
    public final /* synthetic */ int a;

    public /* synthetic */ w0(int i5) {
        this.a = i5;
    }

    @Override // androidx.activity.result.contract.ActivityResultContract
    public final Intent a(Context context, Object obj) {
        Bundle bundleExtra;
        switch (this.a) {
            case 0:
                f.h hVar = (f.h) obj;
                Intent intent = new Intent("androidx.activity.result.contract.action.INTENT_SENDER_REQUEST");
                Intent intent2 = hVar.f8299e;
                if (intent2 != null && (bundleExtra = intent2.getBundleExtra("androidx.activity.result.contract.extra.ACTIVITY_OPTIONS_BUNDLE")) != null) {
                    intent.putExtra("androidx.activity.result.contract.extra.ACTIVITY_OPTIONS_BUNDLE", bundleExtra);
                    intent2.removeExtra("androidx.activity.result.contract.extra.ACTIVITY_OPTIONS_BUNDLE");
                    if (intent2.getBooleanExtra("androidx.fragment.extra.ACTIVITY_OPTIONS_BUNDLE", false)) {
                        IntentSender intentSender = hVar.f8298d;
                        Intrinsics.checkNotNullParameter(intentSender, "intentSender");
                        hVar = new f.h(intentSender, null, hVar.f8300i, hVar.f8301v);
                    }
                }
                intent.putExtra("androidx.activity.result.contract.extra.INTENT_SENDER_REQUEST", hVar);
                if (FragmentManager.M(2)) {
                    Log.v("FragmentManager", "CreateIntent created the following intent: " + intent);
                }
                return intent;
            case 1:
                return d(context, (f.i) obj);
            case 2:
                String[] input = (String[]) obj;
                Intrinsics.checkNotNullParameter(context, "context");
                Intrinsics.checkNotNullParameter(input, "input");
                Intrinsics.checkNotNullParameter(input, "input");
                Intent putExtra = new Intent("androidx.activity.result.contract.action.REQUEST_PERMISSIONS").putExtra("androidx.activity.result.contract.extra.PERMISSIONS", input);
                Intrinsics.checkNotNullExpressionValue(putExtra, "Intent(ACTION_REQUEST_PE…EXTRA_PERMISSIONS, input)");
                return putExtra;
            case 3:
                Intent input2 = (Intent) obj;
                Intrinsics.checkNotNullParameter(context, "context");
                Intrinsics.checkNotNullParameter(input2, "input");
                return input2;
            default:
                f.h input3 = (f.h) obj;
                Intrinsics.checkNotNullParameter(context, "context");
                Intrinsics.checkNotNullParameter(input3, "input");
                Intent putExtra2 = new Intent("androidx.activity.result.contract.action.INTENT_SENDER_REQUEST").putExtra("androidx.activity.result.contract.extra.INTENT_SENDER_REQUEST", input3);
                Intrinsics.checkNotNullExpressionValue(putExtra2, "Intent(ACTION_INTENT_SEN…NT_SENDER_REQUEST, input)");
                return putExtra2;
        }
    }

    @Override // androidx.activity.result.contract.ActivityResultContract
    public u4.b b(Context context, Object obj) {
        switch (this.a) {
            case 1:
                Intrinsics.checkNotNullParameter(context, "context");
                Intrinsics.checkNotNullParameter((f.i) obj, "input");
                return null;
            case 2:
                String[] input = (String[]) obj;
                Intrinsics.checkNotNullParameter(context, "context");
                Intrinsics.checkNotNullParameter(input, "input");
                if (input.length == 0) {
                    return new u4.b(11, kotlin.collections.v0.d());
                }
                for (String str : input) {
                    if (y0.b.a(context, str) != 0) {
                        return null;
                    }
                }
                int a = kotlin.collections.u0.a(input.length);
                if (a < 16) {
                    a = 16;
                }
                LinkedHashMap linkedHashMap = new LinkedHashMap(a);
                for (String str2 : input) {
                    linkedHashMap.put(str2, Boolean.TRUE);
                }
                return new u4.b(11, linkedHashMap);
            default:
                return super.b(context, obj);
        }
    }

    @Override // androidx.activity.result.contract.ActivityResultContract
    public final Object c(int i5, Intent intent) {
        List arrayList;
        switch (this.a) {
            case 1:
                if (i5 != -1) {
                    intent = null;
                }
                if (intent != null) {
                    Uri data = intent.getData();
                    if (data == null) {
                        Intrinsics.checkNotNullParameter(intent, "<this>");
                        LinkedHashSet linkedHashSet = new LinkedHashSet();
                        Uri data2 = intent.getData();
                        if (data2 != null) {
                            linkedHashSet.add(data2);
                        }
                        ClipData clipData = intent.getClipData();
                        if (clipData == null && linkedHashSet.isEmpty()) {
                            arrayList = kotlin.collections.m0.f13512d;
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
                        break;
                    }
                }
                break;
            case 2:
                if (i5 != -1) {
                    break;
                } else if (intent == null) {
                    break;
                } else {
                    String[] stringArrayExtra = intent.getStringArrayExtra("androidx.activity.result.contract.extra.PERMISSIONS");
                    int[] intArrayExtra = intent.getIntArrayExtra("androidx.activity.result.contract.extra.PERMISSION_GRANT_RESULTS");
                    if (intArrayExtra != null && stringArrayExtra != null) {
                        ArrayList arrayList2 = new ArrayList(intArrayExtra.length);
                        for (int i10 : intArrayExtra) {
                            arrayList2.add(Boolean.valueOf(i10 == 0));
                        }
                        break;
                    } else {
                        break;
                    }
                }
        }
        return new f.a(i5, intent);
    }

    public Intent d(Context context, f.i input) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(input, "input");
        if (z0.d.j()) {
            Intent intent = new Intent("android.provider.action.PICK_IMAGES");
            intent.setType(z0.d.i(input.a));
            input.f8303c.getClass();
            intent.putExtra("android.provider.extra.PICK_IMAGES_LAUNCH_TAB", 1);
            return intent;
        }
        Intrinsics.checkNotNullParameter(context, "context");
        if (z0.d.h(context) == null) {
            Intent intent2 = new Intent("android.intent.action.OPEN_DOCUMENT");
            intent2.setType(z0.d.i(input.a));
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
        input.f8303c.getClass();
        intent3.putExtra("androidx.activity.result.contract.extra.PICK_IMAGES_LAUNCH_TAB", 1);
        return intent3;
    }
}
