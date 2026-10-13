package com.android.billingclient.api;

import a5.e0;
import a5.g;
import a5.j0;
import android.app.Activity;
import android.app.ActivityOptions;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.IntentSender;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.Bundle;
import android.os.ResultReceiver;
import com.discord.media.engine.MediaEngine;
import com.google.android.apps.common.proguard.UsedByReflection;
import com.google.android.gms.internal.play_billing.a4;
import com.google.android.gms.internal.play_billing.d4;
import com.google.android.gms.internal.play_billing.e4;
import com.google.android.gms.internal.play_billing.o4;
import com.google.android.gms.internal.play_billing.p4;
import com.google.android.gms.internal.play_billing.s;
import e4.r;
import f0.e;
import y0.b;

@UsedByReflection("PlatformActivityProxy")
/* loaded from: classes.dex */
public class ProxyBillingActivity extends Activity {
    public r E;

    /* renamed from: d, reason: collision with root package name */
    public ResultReceiver f3614d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f3615e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f3616i;

    /* renamed from: v, reason: collision with root package name */
    public int f3617v;

    /* renamed from: w, reason: collision with root package name */
    public long f3618w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f3619x;

    /* renamed from: y, reason: collision with root package name */
    public j0 f3620y;

    public static int a(int i5, Intent intent) {
        if (intent != null) {
            if (intent.getExtras() == null) {
                return 22;
            }
            return i5 == 5 ? 139 : 1;
        }
        if (i5 == -1) {
            return 113;
        }
        if (i5 == 0) {
            return MediaEngine.MAX_SUPPORTED_PROTOCOL_VERSION;
        }
        if (i5 != 3) {
            return i5 != 4 ? 117 : 116;
        }
        return 115;
    }

    public final Intent b(int i5, long j, boolean z5) {
        BillingResult billingResult;
        Intent c6 = c();
        a4 a4Var = a4.BROADCAST_ACTION_UNSPECIFIED;
        if (z5) {
            j0 j0Var = this.f3620y;
            if (j0Var != null && (billingResult = (BillingResult) j0Var.f189c) != null) {
                c6.putExtra("RESPONSE_CODE", billingResult.a);
                c6.putExtra("DEBUG_MESSAGE", billingResult.f3601c);
            } else if (j0Var != null && !j0Var.f188b) {
                c6.putExtra("RESPONSE_CODE", 3);
                c6.putExtra("DEBUG_MESSAGE", "Play Store is blocked.");
                g a = BillingResult.a();
                a.f155d = 3;
                a.f157i = "Play Store is blocked.";
                c6.putExtra("FAILURE_LOGGING_PAYLOAD", e0.b(142, 2, a.e(), null, a4Var).b());
            }
            c6.putExtra("INTENT_SOURCE", "LAUNCH_BILLING_FLOW");
            c6.putExtra("billingClientTransactionId", j);
            c6.putExtra("wasServiceAutoReconnected", this.f3619x);
            return c6;
        }
        c6.putExtra("RESPONSE_CODE", 6);
        c6.putExtra("DEBUG_MESSAGE", "An internal error occurred.");
        g a10 = BillingResult.a();
        a10.f155d = 6;
        a10.f157i = "An internal error occurred.";
        c6.putExtra("FAILURE_LOGGING_PAYLOAD", e0.b(i5, 2, a10.e(), null, a4Var).b());
        c6.putExtra("INTENT_SOURCE", "LAUNCH_BILLING_FLOW");
        c6.putExtra("billingClientTransactionId", j);
        c6.putExtra("wasServiceAutoReconnected", this.f3619x);
        return c6;
    }

    public final Intent c() {
        Intent intent = new Intent("com.android.vending.billing.LOCAL_BROADCAST_PURCHASES_UPDATED");
        intent.setPackage(getApplicationContext().getPackageName());
        return intent;
    }

    /* JADX WARN: Code restructure failed: missing block: B:37:0x0014, code lost:
    
        r0 = true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:4:0x0010, code lost:
    
        if (r12 == null) goto L6;
     */
    /* JADX WARN: Code restructure failed: missing block: B:55:0x0061, code lost:
    
        if (r12 == null) goto L6;
     */
    /* JADX WARN: Code restructure failed: missing block: B:5:0x0012, code lost:
    
        r0 = false;
     */
    /* JADX WARN: Removed duplicated region for block: B:11:0x008c  */
    /* JADX WARN: Removed duplicated region for block: B:14:0x00b8  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x0111  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x011f  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x00c8  */
    /* JADX WARN: Removed duplicated region for block: B:33:0x00a3  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x003c  */
    @Override // android.app.Activity
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void onActivityResult(int i5, int i6, Intent intent) {
        boolean z5;
        j0 j0Var;
        Intent c6;
        int i10;
        ResultReceiver resultReceiver;
        super.onActivityResult(i5, i6, intent);
        if (i5 != 100) {
            if (i5 != 110) {
                if (i5 == 101) {
                    int i11 = s.a;
                    if (intent == null) {
                        s.h("ProxyBillingActivity", "Got null intent!");
                        intent = null;
                    } else {
                        Bundle extras = intent.getExtras();
                        if (extras == null) {
                            s.h("ProxyBillingActivity", "Unexpected null bundle received!");
                        } else {
                            i10 = extras.getInt("IN_APP_MESSAGE_RESPONSE_CODE", 0);
                            resultReceiver = this.f3614d;
                            if (resultReceiver != null) {
                                resultReceiver.send(i10, intent == null ? null : intent.getExtras());
                            }
                        }
                    }
                    i10 = 0;
                    resultReceiver = this.f3614d;
                    if (resultReceiver != null) {
                    }
                } else {
                    s.h("ProxyBillingActivity", "Got onActivityResult with wrong requestCode: " + i5 + "; skipping...");
                }
                this.f3615e = false;
                j0Var = this.f3620y;
                if (j0Var != null) {
                    j0Var.f189c = null;
                }
                finish();
            }
        }
        int i12 = s.e(intent, "ProxyBillingActivity").a;
        int i13 = -1;
        if (i6 == -1) {
            if (i12 != 0) {
                i6 = -1;
            }
            if (true == z5) {
                s.h("ProxyBillingActivity", "Got null data with resultCode " + i13 + "!");
            } else if (intent.getExtras() == null) {
                s.h("ProxyBillingActivity", "Got null bundle!");
            }
            if (e.a(a(i13, intent), 1)) {
                c6 = b(a(i13, intent), this.f3618w, intent == null);
            } else {
                String string = intent.getExtras().getString("ALTERNATIVE_BILLING_USER_CHOICE_DATA");
                if (string != null) {
                    Intent intent2 = new Intent("com.android.vending.billing.ALTERNATIVE_BILLING");
                    intent2.setPackage(getApplicationContext().getPackageName());
                    intent2.putExtra("ALTERNATIVE_BILLING_USER_CHOICE_DATA", string);
                    intent2.putExtra("INTENT_SOURCE", "LAUNCH_BILLING_FLOW");
                    c6 = intent2;
                } else {
                    c6 = c();
                    c6.putExtras(intent.getExtras());
                    c6.putExtra("INTENT_SOURCE", "LAUNCH_BILLING_FLOW");
                }
                c6.putExtra("billingClientTransactionId", this.f3618w);
                c6.putExtra("wasServiceAutoReconnected", this.f3619x);
            }
            if (i5 == 110) {
                c6.putExtra("IS_FIRST_PARTY_PURCHASE", true);
            }
            sendBroadcast(c6);
            this.f3615e = false;
            j0Var = this.f3620y;
            if (j0Var != null) {
            }
            finish();
        }
        s.h("ProxyBillingActivity", "Activity finished with resultCode " + i6 + " and billing's responseCode: " + i12);
        i13 = i6;
        if (true == z5) {
        }
        if (e.a(a(i13, intent), 1)) {
        }
        if (i5 == 110) {
        }
        sendBroadcast(c6);
        this.f3615e = false;
        j0Var = this.f3620y;
        if (j0Var != null) {
        }
        finish();
    }

    /* JADX WARN: Removed duplicated region for block: B:41:0x01c9  */
    /* JADX WARN: Removed duplicated region for block: B:44:0x01cd  */
    @Override // android.app.Activity
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void onCreate(Bundle bundle) {
        int i5;
        PendingIntent pendingIntent;
        ProxyBillingActivity proxyBillingActivity;
        IntentSender.SendIntentException sendIntentException;
        ResultReceiver resultReceiver;
        Bundle bundle2;
        Bundle bundle3;
        super.onCreate(bundle);
        if (!(bundle == null ? getIntent() == null ? false : getIntent().hasExtra("IN_APP_MESSAGE_INTENT") : bundle.containsKey("in_app_message_result_receiver"))) {
            try {
                i5 = getPackageManager().getPackageInfo(getPackageName(), 0).versionCode;
            } catch (PackageManager.NameNotFoundException e9) {
                s.i("ProxyBillingActivity", "Failed to get package info for current package.", e9);
                i5 = -1;
            }
            if (this.E == null) {
                Context applicationContext = getApplicationContext();
                d4 B = e4.B();
                B.j(getPackageName());
                B.k();
                B.f(i5);
                B.e(Build.VERSION.SDK_INT);
                B.h();
                this.E = new r(applicationContext, (e4) B.a());
            }
            synchronized (this) {
                try {
                    this.f3620y = new j0(this.E);
                    IntentFilter intentFilter = new IntentFilter("com.android.vending.billing.IN_APP_BILLING_RESULT_UPDATE_ACTION");
                    intentFilter.addAction("com.android.vending.billing.PLAY_BILLING_ACTIVITY_CREATED_ACTION");
                    b.f(this, this.f3620y, intentFilter, "com.google.android.finsky.permission.PLAY_BILLING_LIBRARY_BROADCAST", 2);
                } catch (NoSuchMethodError | RuntimeException e10) {
                    this.f3620y = null;
                    if (e10 instanceof NoSuchMethodError) {
                        r rVar = this.E;
                        o4 r5 = p4.r();
                        r5.c();
                        p4.s((p4) r5.f5728e, 2);
                        rVar.D((p4) r5.a());
                    } else {
                        r rVar2 = this.E;
                        o4 r7 = p4.r();
                        r7.c();
                        p4.s((p4) r7.f5728e, 1);
                        rVar2.D((p4) r7.a());
                    }
                    s.i("ProxyBillingActivity", "Failed to register receiver.", e10);
                }
            }
        }
        if (bundle != null) {
            s.g("ProxyBillingActivity", "Launching Play Store billing flow from savedInstanceState");
            this.f3615e = bundle.getBoolean("send_cancelled_broadcast_if_finished", false);
            if (bundle.containsKey("in_app_message_result_receiver")) {
                this.f3614d = (ResultReceiver) bundle.getParcelable("in_app_message_result_receiver");
            }
            this.f3616i = bundle.getBoolean("IS_FLOW_FROM_FIRST_PARTY_CLIENT", false);
            this.f3617v = bundle.getInt("activity_code", 100);
            if (bundle.containsKey("billingClientTransactionId")) {
                this.f3618w = bundle.getLong("billingClientTransactionId");
            }
            if (bundle.containsKey("wasServiceAutoReconnected")) {
                this.f3619x = bundle.getBoolean("wasServiceAutoReconnected");
                return;
            }
            return;
        }
        s.g("ProxyBillingActivity", "Launching Play Store billing flow");
        this.f3617v = 100;
        if (getIntent().hasExtra("BUY_INTENT")) {
            pendingIntent = (PendingIntent) getIntent().getParcelableExtra("BUY_INTENT");
            if (getIntent().hasExtra("IS_FLOW_FROM_FIRST_PARTY_CLIENT") && getIntent().getBooleanExtra("IS_FLOW_FROM_FIRST_PARTY_CLIENT", false)) {
                this.f3616i = true;
                this.f3617v = 110;
            }
        } else if (getIntent().hasExtra("IN_APP_MESSAGE_INTENT")) {
            pendingIntent = (PendingIntent) getIntent().getParcelableExtra("IN_APP_MESSAGE_INTENT");
            this.f3614d = (ResultReceiver) getIntent().getParcelableExtra("in_app_message_result_receiver");
            this.f3617v = 101;
        } else {
            pendingIntent = null;
        }
        if (getIntent().hasExtra("billingClientTransactionId")) {
            this.f3618w = getIntent().getLongExtra("billingClientTransactionId", 0L);
        }
        if (getIntent().hasExtra("wasServiceAutoReconnected")) {
            this.f3619x = getIntent().getBooleanExtra("wasServiceAutoReconnected", false);
        }
        try {
            this.f3615e = true;
            int i6 = Build.VERSION.SDK_INT;
            try {
                try {
                    if (i6 >= 36) {
                        bundle3 = ActivityOptions.makeBasic().setPendingIntentBackgroundActivityStartMode(3).toBundle();
                    } else {
                        if (i6 < 34) {
                            bundle2 = null;
                            proxyBillingActivity = this;
                            proxyBillingActivity.startIntentSenderForResult(pendingIntent.getIntentSender(), this.f3617v, new Intent(), 0, 0, 0, bundle2);
                            return;
                        }
                        bundle3 = ActivityOptions.makeBasic().setPendingIntentBackgroundActivityStartMode(1).toBundle();
                    }
                    proxyBillingActivity.startIntentSenderForResult(pendingIntent.getIntentSender(), this.f3617v, new Intent(), 0, 0, 0, bundle2);
                    return;
                } catch (IntentSender.SendIntentException e11) {
                    e = e11;
                    sendIntentException = e;
                    s.i("ProxyBillingActivity", "Got exception while trying to start a purchase flow.", sendIntentException);
                    resultReceiver = proxyBillingActivity.f3614d;
                    if (resultReceiver == null) {
                        resultReceiver.send(0, null);
                    } else {
                        Intent b10 = b(137, proxyBillingActivity.f3618w, false);
                        if (proxyBillingActivity.f3616i) {
                            b10.putExtra("IS_FIRST_PARTY_PURCHASE", true);
                        }
                        sendBroadcast(b10);
                    }
                    proxyBillingActivity.f3615e = false;
                    finish();
                }
                bundle2 = bundle3;
                proxyBillingActivity = this;
            } catch (IntentSender.SendIntentException e12) {
                sendIntentException = e12;
                proxyBillingActivity = this;
                s.i("ProxyBillingActivity", "Got exception while trying to start a purchase flow.", sendIntentException);
                resultReceiver = proxyBillingActivity.f3614d;
                if (resultReceiver == null) {
                }
                proxyBillingActivity.f3615e = false;
                finish();
            }
        } catch (IntentSender.SendIntentException e13) {
            e = e13;
            proxyBillingActivity = this;
        }
    }

    @Override // android.app.Activity
    public final void onDestroy() {
        BillingResult billingResult;
        super.onDestroy();
        j0 j0Var = this.f3620y;
        if (j0Var != null) {
            billingResult = (BillingResult) j0Var.f189c;
            try {
                unregisterReceiver(j0Var);
            } catch (RuntimeException e9) {
                s.i("ProxyBillingActivity", "Failed to unregister receiver.", e9);
            }
        } else {
            billingResult = null;
        }
        if (isFinishing() && this.f3615e) {
            Intent c6 = c();
            if (billingResult != null) {
                c6.putExtra("RESPONSE_CODE", billingResult.a);
                c6.putExtra("DEBUG_MESSAGE", billingResult.f3601c);
            } else {
                c6.putExtra("RESPONSE_CODE", 1);
                c6.putExtra("DEBUG_MESSAGE", "Billing dialog closed.");
            }
            if (this.f3616i) {
                c6.putExtra("IS_FIRST_PARTY_PURCHASE", true);
            }
            int i5 = this.f3617v;
            if (i5 == 110 || i5 == 100) {
                c6.putExtra("INTENT_SOURCE", "LAUNCH_BILLING_FLOW");
                c6.putExtra("billingClientTransactionId", this.f3618w);
            }
            sendBroadcast(c6);
        }
    }

    @Override // android.app.Activity
    public final void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
        ResultReceiver resultReceiver = this.f3614d;
        if (resultReceiver != null) {
            bundle.putParcelable("in_app_message_result_receiver", resultReceiver);
        }
        bundle.putBoolean("send_cancelled_broadcast_if_finished", this.f3615e);
        bundle.putBoolean("IS_FLOW_FROM_FIRST_PARTY_CLIENT", this.f3616i);
        bundle.putInt("activity_code", this.f3617v);
        bundle.putLong("billingClientTransactionId", this.f3618w);
        bundle.putBoolean("wasServiceAutoReconnected", this.f3619x);
    }
}
