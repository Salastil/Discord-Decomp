package com.google.android.gms.auth.api.signin.internal;

import android.content.ActivityNotFoundException;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.accessibility.AccessibilityEvent;
import androidx.fragment.app.FragmentActivity;
import com.discord.recycler_view.scroll.RecyclerViewScrollLimiter;
import com.google.android.gms.auth.api.signin.GoogleSignInAccount;
import com.google.android.gms.auth.api.signin.GoogleSignInOptions;
import com.google.android.gms.auth.api.signin.SignInAccount;
import com.google.android.gms.common.annotation.KeepName;
import com.google.android.gms.common.api.Status;
import r3.g;
import ve.b;
import ve.i;

@KeepName
/* loaded from: classes3.dex */
public class SignInHubActivity extends FragmentActivity {

    /* renamed from: y, reason: collision with root package name */
    public static boolean f5636y = false;

    /* renamed from: e, reason: collision with root package name */
    public boolean f5637e = false;

    /* renamed from: i, reason: collision with root package name */
    public SignInConfiguration f5638i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f5639v;

    /* renamed from: w, reason: collision with root package name */
    public int f5640w;

    /* renamed from: x, reason: collision with root package name */
    public Intent f5641x;

    @Override // android.app.Activity, android.view.Window.Callback
    public final boolean dispatchPopulateAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        return true;
    }

    public final void e(int i5) {
        Status status = new Status(i5, null, null, null);
        Intent intent = new Intent();
        intent.putExtra("googleSignInStatus", status);
        setResult(0, intent);
        finish();
        f5636y = false;
    }

    @Override // androidx.fragment.app.FragmentActivity, androidx.activity.ComponentActivity, android.app.Activity
    public final void onActivityResult(int i5, int i6, Intent intent) {
        GoogleSignInAccount googleSignInAccount;
        if (this.f5637e) {
            return;
        }
        setResult(0);
        if (i5 != 40962) {
            return;
        }
        if (intent != null) {
            SignInAccount signInAccount = (SignInAccount) intent.getParcelableExtra("signInAccount");
            if (signInAccount != null && (googleSignInAccount = signInAccount.f5632e) != null) {
                i t5 = i.t(this);
                GoogleSignInOptions googleSignInOptions = this.f5638i.f5635e;
                synchronized (t5) {
                    ((b) t5.f19405d).c(googleSignInAccount, googleSignInOptions);
                }
                intent.removeExtra("signInAccount");
                intent.putExtra("googleSignInAccount", googleSignInAccount);
                this.f5639v = true;
                this.f5640w = i6;
                this.f5641x = intent;
                getSupportLoaderManager().b(new g(6, this));
                f5636y = false;
                return;
            }
            if (intent.hasExtra("errorCode")) {
                int intExtra = intent.getIntExtra("errorCode", 8);
                if (intExtra == 13) {
                    intExtra = 12501;
                }
                e(intExtra);
                return;
            }
        }
        e(8);
    }

    @Override // androidx.fragment.app.FragmentActivity, androidx.activity.ComponentActivity, x0.h, android.app.Activity
    public final void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        Intent intent = getIntent();
        String action = intent.getAction();
        if (action == null) {
            Log.e("AuthSignInClient", "Null action");
            e(RecyclerViewScrollLimiter.MAX_FLING_VELOCITY);
            return;
        }
        if (action.equals("com.google.android.gms.auth.NO_IMPL")) {
            Log.e("AuthSignInClient", "Action not implemented");
            e(RecyclerViewScrollLimiter.MAX_FLING_VELOCITY);
            return;
        }
        if (!action.equals("com.google.android.gms.auth.GOOGLE_SIGN_IN") && !action.equals("com.google.android.gms.auth.APPAUTH_SIGN_IN")) {
            Log.e("AuthSignInClient", "Unknown action: ".concat(String.valueOf(intent.getAction())));
            finish();
            return;
        }
        Bundle bundleExtra = intent.getBundleExtra("config");
        if (bundleExtra == null) {
            Log.e("AuthSignInClient", "Activity started with no configuration.");
            setResult(0);
            finish();
            return;
        }
        SignInConfiguration signInConfiguration = (SignInConfiguration) bundleExtra.getParcelable("config");
        if (signInConfiguration == null) {
            Log.e("AuthSignInClient", "Activity started with invalid configuration.");
            setResult(0);
            finish();
            return;
        }
        this.f5638i = signInConfiguration;
        if (bundle != null) {
            boolean z5 = bundle.getBoolean("signingInGoogleApiClients");
            this.f5639v = z5;
            if (z5) {
                this.f5640w = bundle.getInt("signInResultCode");
                Intent intent2 = (Intent) bundle.getParcelable("signInResultData");
                if (intent2 == null) {
                    Log.e("AuthSignInClient", "Sign in result data cannot be null");
                    setResult(0);
                    finish();
                    return;
                } else {
                    this.f5641x = intent2;
                    getSupportLoaderManager().b(new g(6, this));
                    f5636y = false;
                    return;
                }
            }
            return;
        }
        if (f5636y) {
            setResult(0);
            e(12502);
            return;
        }
        f5636y = true;
        Intent intent3 = new Intent(action);
        if (action.equals("com.google.android.gms.auth.GOOGLE_SIGN_IN")) {
            intent3.setPackage("com.google.android.gms");
        } else {
            intent3.setPackage(getPackageName());
        }
        intent3.putExtra("config", this.f5638i);
        try {
            startActivityForResult(intent3, 40962);
        } catch (ActivityNotFoundException unused) {
            this.f5637e = true;
            Log.w("AuthSignInClient", "Could not launch sign in Intent. Google Play Service is probably being updated...");
            e(17);
        }
    }

    @Override // androidx.fragment.app.FragmentActivity, android.app.Activity
    public final void onDestroy() {
        super.onDestroy();
        f5636y = false;
    }

    @Override // androidx.activity.ComponentActivity, x0.h, android.app.Activity
    public final void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
        bundle.putBoolean("signingInGoogleApiClients", this.f5639v);
        if (this.f5639v) {
            bundle.putInt("signInResultCode", this.f5640w);
            bundle.putParcelable("signInResultData", this.f5641x);
        }
    }
}
