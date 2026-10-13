package pl;

import android.app.Activity;
import android.content.Intent;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.bridge.BaseActivityEventListener;
import com.reactnativedocumentpicker.RNDocumentPickerModule;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class i extends BaseActivityEventListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ RNDocumentPickerModule f16453d;

    public i(RNDocumentPickerModule rNDocumentPickerModule) {
        this.f16453d = rNDocumentPickerModule;
    }

    @Override // com.facebook.react.bridge.BaseActivityEventListener, com.facebook.react.bridge.ActivityEventListener
    public final void onActivityResult(Activity activity, int i5, int i6, Intent intent) {
        g gVar;
        g gVar2;
        g gVar3;
        g gVar4;
        Intrinsics.checkNotNullParameter(activity, "activity");
        if (i5 == 41 || i5 == 42 || i5 == 43) {
            RNDocumentPickerModule rNDocumentPickerModule = this.f16453d;
            if (i6 != -1) {
                if (i6 == 0) {
                    gVar3 = rNDocumentPickerModule.promiseWrapper;
                    gVar3.b("OPERATION_CANCELED", "user canceled the document picker", null);
                    return;
                } else {
                    gVar4 = rNDocumentPickerModule.promiseWrapper;
                    gVar4.b("UNEXPECTED_ACTIVITY_RESULT", "Unknown activity result: " + i6, null);
                    return;
                }
            }
            if (intent == null) {
                gVar2 = rNDocumentPickerModule.promiseWrapper;
                gVar2.b("INVALID_DATA_RETURNED", "Data from document picker is null", null);
                return;
            }
            switch (i5) {
                case 41:
                    rNDocumentPickerModule.processFilePickerResult(intent);
                    break;
                case 42:
                    rNDocumentPickerModule.processDirectoryPickerResult(intent);
                    break;
                case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                    rNDocumentPickerModule.processSaveAsResult(intent);
                    break;
                default:
                    gVar = rNDocumentPickerModule.promiseWrapper;
                    gVar.b("UNEXPECTED_ACTIVITY_RESULT", "Unknown activity result: " + i6, null);
                    break;
            }
        }
    }
}
