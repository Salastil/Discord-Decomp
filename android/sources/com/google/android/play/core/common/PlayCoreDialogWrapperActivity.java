package com.google.android.play.core.common;

import android.app.Activity;
import android.app.PendingIntent;
import android.content.Intent;
import android.content.IntentSender;
import android.os.Bundle;
import android.os.ResultReceiver;

/* loaded from: classes3.dex */
public class PlayCoreDialogWrapperActivity extends Activity {

    /* renamed from: d, reason: collision with root package name */
    public ResultReceiver f6174d;

    @Override // android.app.Activity
    public final void onActivityResult(int i5, int i6, Intent intent) {
        ResultReceiver resultReceiver;
        super.onActivityResult(i5, i6, intent);
        if (i5 == 0 && (resultReceiver = this.f6174d) != null) {
            if (i6 == -1) {
                resultReceiver.send(1, new Bundle());
            } else if (i6 == 0) {
                resultReceiver.send(2, new Bundle());
            }
        }
        finish();
    }

    @Override // android.app.Activity
    public final void onCreate(Bundle bundle) {
        Intent intent;
        PlayCoreDialogWrapperActivity playCoreDialogWrapperActivity;
        int intExtra = getIntent().getIntExtra("window_flags", 0);
        if (intExtra != 0) {
            getWindow().getDecorView().setSystemUiVisibility(intExtra);
            Intent intent2 = new Intent();
            intent2.putExtra("window_flags", intExtra);
            intent = intent2;
        } else {
            intent = null;
        }
        super.onCreate(bundle);
        if (bundle != null) {
            this.f6174d = (ResultReceiver) bundle.getParcelable("result_receiver");
            return;
        }
        this.f6174d = (ResultReceiver) getIntent().getParcelableExtra("result_receiver");
        Bundle extras = getIntent().getExtras();
        PendingIntent pendingIntent = extras != null ? (PendingIntent) extras.get("confirmation_intent") : null;
        if (extras == null || pendingIntent == null) {
            ResultReceiver resultReceiver = this.f6174d;
            if (resultReceiver != null) {
                resultReceiver.send(3, new Bundle());
            }
            finish();
            return;
        }
        try {
            playCoreDialogWrapperActivity = this;
            try {
                playCoreDialogWrapperActivity.startIntentSenderForResult(pendingIntent.getIntentSender(), 0, intent, 0, 0, 0);
            } catch (IntentSender.SendIntentException unused) {
                ResultReceiver resultReceiver2 = playCoreDialogWrapperActivity.f6174d;
                if (resultReceiver2 != null) {
                    resultReceiver2.send(3, new Bundle());
                }
                finish();
            }
        } catch (IntentSender.SendIntentException unused2) {
            playCoreDialogWrapperActivity = this;
        }
    }

    @Override // android.app.Activity
    public final void onSaveInstanceState(Bundle bundle) {
        bundle.putParcelable("result_receiver", this.f6174d);
    }
}
