package com.google.android.gms.common.api;

import af.e;
import android.app.Activity;
import android.app.PendingIntent;
import android.content.ActivityNotFoundException;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.IntentSender;
import android.os.Build;
import android.os.Bundle;
import android.util.Log;
import bf.t;
import com.google.android.gms.common.annotation.KeepName;
import fg.a;
import s4.h;
import ye.b;

@KeepName
/* loaded from: classes3.dex */
public class GoogleApiActivity extends Activity implements DialogInterface.OnCancelListener {

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ int f5650e = 0;

    /* renamed from: d, reason: collision with root package name */
    public int f5651d = 0;

    @Override // android.app.Activity
    public final void onActivityResult(int i5, int i6, Intent intent) {
        super.onActivityResult(i5, i6, intent);
        if (i5 == 1) {
            boolean booleanExtra = getIntent().getBooleanExtra("notify_manager", true);
            this.f5651d = 0;
            setResult(i6, intent);
            if (booleanExtra) {
                e g6 = e.g(this);
                if (i6 == -1) {
                    a aVar = g6.K;
                    aVar.sendMessage(aVar.obtainMessage(3));
                } else if (i6 == 0) {
                    g6.h(new b(13, null, null), getIntent().getIntExtra("failing_client_id", -1));
                }
            }
        } else if (i5 == 2) {
            this.f5651d = 0;
            setResult(i6, intent);
        }
        finish();
    }

    @Override // android.content.DialogInterface.OnCancelListener
    public final void onCancel(DialogInterface dialogInterface) {
        this.f5651d = 0;
        setResult(0);
        finish();
    }

    @Override // android.app.Activity
    public final void onCreate(Bundle bundle) {
        GoogleApiActivity googleApiActivity;
        super.onCreate(bundle);
        if (bundle != null) {
            this.f5651d = bundle.getInt("resolution");
        }
        if (this.f5651d == 1) {
            return;
        }
        Bundle extras = getIntent().getExtras();
        if (extras == null) {
            Log.e("GoogleApiActivity", "Activity started without extras");
            finish();
            return;
        }
        PendingIntent pendingIntent = (PendingIntent) extras.get("pending_intent");
        Integer num = (Integer) extras.get("error_code");
        if (pendingIntent == null && num == null) {
            Log.e("GoogleApiActivity", "Activity started without resolution");
            finish();
            return;
        }
        if (pendingIntent == null) {
            t.g(num);
            ye.e.f20918d.d(this, num.intValue(), this);
            this.f5651d = 1;
            return;
        }
        try {
            googleApiActivity = this;
            try {
                googleApiActivity.startIntentSenderForResult(pendingIntent.getIntentSender(), 1, null, 0, 0, 0);
                googleApiActivity.f5651d = 1;
            } catch (ActivityNotFoundException e9) {
                e = e9;
                if (extras.getBoolean("notify_manager", true)) {
                    e.g(this).h(new b(22, null, null), getIntent().getIntExtra("failing_client_id", -1));
                } else {
                    String f2 = h.f("Activity not found while launching ", pendingIntent.toString(), ".");
                    if (Build.FINGERPRINT.contains("generic")) {
                        f2 = f2.concat(" This may occur when resolving Google Play services connection issues on emulators with Google APIs but not Google Play Store.");
                    }
                    Log.e("GoogleApiActivity", f2, e);
                }
                googleApiActivity.f5651d = 1;
                finish();
            } catch (IntentSender.SendIntentException e10) {
                e = e10;
                Log.e("GoogleApiActivity", "Failed to launch pendingIntent", e);
                finish();
            }
        } catch (ActivityNotFoundException e11) {
            e = e11;
            googleApiActivity = this;
        } catch (IntentSender.SendIntentException e12) {
            e = e12;
        }
    }

    @Override // android.app.Activity
    public final void onSaveInstanceState(Bundle bundle) {
        bundle.putInt("resolution", this.f5651d);
        super.onSaveInstanceState(bundle);
    }
}
