package com.google.firebase.messaging;

import a5.k0;
import android.content.Intent;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Log;
import androidx.annotation.NonNull;
import com.google.android.gms.cloudmessaging.Rpc;
import java.io.IOException;
import java.util.ArrayDeque;
import java.util.Locale;
import java.util.Queue;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/* loaded from: classes3.dex */
public class FirebaseMessagingService extends EnhancedIntentService {
    public static final String ACTION_DIRECT_BOOT_REMOTE_INTENT = "com.google.firebase.messaging.RECEIVE_DIRECT_BOOT";
    static final String ACTION_NEW_TOKEN = "com.google.firebase.messaging.NEW_TOKEN";
    static final String ACTION_REMOTE_INTENT = "com.google.android.c2dm.intent.RECEIVE";
    static final String EXTRA_TOKEN = "token";
    private static final int RECENTLY_RECEIVED_MESSAGE_IDS_MAX_SIZE = 10;
    private static final Queue<String> recentlyReceivedMessageIds = new ArrayDeque(10);
    private Rpc rpc;

    public static void resetForTesting() {
        recentlyReceivedMessageIds.clear();
    }

    @Override // com.google.firebase.messaging.EnhancedIntentService
    public Intent getStartCommandIntent(Intent intent) {
        return (Intent) ((ArrayDeque) r.e().f6262w).poll();
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x015d  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0175  */
    /* JADX WARN: Removed duplicated region for block: B:44:0x01ba  */
    @Override // com.google.firebase.messaging.EnhancedIntentService
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void handleIntent(Intent intent) {
        String stringExtra;
        Rpc rpc;
        int i5;
        String action = intent.getAction();
        if (!ACTION_REMOTE_INTENT.equals(action) && !ACTION_DIRECT_BOOT_REMOTE_INTENT.equals(action)) {
            if (ACTION_NEW_TOKEN.equals(action)) {
                onNewToken(intent.getStringExtra(EXTRA_TOKEN));
                return;
            }
            Log.d("FirebaseMessaging", "Unknown intent action: " + intent.getAction());
            return;
        }
        String stringExtra2 = intent.getStringExtra("google.message_id");
        if (!TextUtils.isEmpty(stringExtra2)) {
            Queue<String> queue = recentlyReceivedMessageIds;
            if (queue.contains(stringExtra2)) {
                if (Log.isLoggable("FirebaseMessaging", 3)) {
                    Log.d("FirebaseMessaging", "Received duplicate message: " + stringExtra2);
                }
                if (this.rpc == null) {
                    this.rpc = new Rpc(getApplicationContext());
                }
                rpc = this.rpc;
                if (rpc.f5645c.h() >= 233700000) {
                    k0.r(new IOException("SERVICE_NOT_AVAILABLE"));
                    return;
                }
                Bundle bundle = new Bundle();
                String stringExtra3 = intent.getStringExtra("google.message_id");
                if (stringExtra3 == null) {
                    stringExtra3 = intent.getStringExtra("message_id");
                }
                bundle.putString("google.message_id", stringExtra3);
                Integer valueOf = intent.hasExtra("google.product_id") ? Integer.valueOf(intent.getIntExtra("google.product_id", 0)) : null;
                if (valueOf != null) {
                    bundle.putInt("google.product_id", valueOf.intValue());
                }
                xe.k b10 = xe.k.b(rpc.f5644b);
                synchronized (b10) {
                    i5 = b10.a;
                    b10.a = i5 + 1;
                }
                b10.c(new xe.j(i5, 3, bundle, 0));
                return;
            }
            if (queue.size() >= 10) {
                queue.remove();
            }
            queue.add(stringExtra2);
        }
        stringExtra = intent.getStringExtra("message_type");
        if (stringExtra == null) {
            stringExtra = "gcm";
        }
        switch (stringExtra) {
            case "deleted_messages":
                onDeletedMessages();
                break;
            case "gcm":
                com.facebook.imagepipeline.nativecode.b.s(intent);
                Bundle extras = intent.getExtras();
                if (extras == null) {
                    extras = new Bundle();
                }
                extras.remove("androidx.content.wakelockid");
                if (gj.c.P(extras)) {
                    gj.c cVar = new gj.c(extras);
                    ExecutorService newSingleThreadExecutor = Executors.newSingleThreadExecutor(new a5.t("Firebase-Messaging-Network-Io", 1));
                    try {
                        if (new e4.m(this, cVar, newSingleThreadExecutor).Z()) {
                            break;
                        } else {
                            newSingleThreadExecutor.shutdown();
                            if (com.facebook.imagepipeline.nativecode.b.J(intent)) {
                                com.facebook.imagepipeline.nativecode.b.t("_nf", intent.getExtras());
                            }
                        }
                    } finally {
                        newSingleThreadExecutor.shutdown();
                    }
                }
                onMessageReceived(new RemoteMessage(extras));
                break;
            case "send_error":
                String stringExtra4 = intent.getStringExtra("google.message_id");
                if (stringExtra4 == null) {
                    stringExtra4 = intent.getStringExtra("message_id");
                }
                String stringExtra5 = intent.getStringExtra("error");
                ap.a aVar = new ap.a(stringExtra5, 4);
                if (stringExtra5 != null) {
                    stringExtra5.toLowerCase(Locale.US).getClass();
                }
                onSendError(stringExtra4, aVar);
                break;
            case "send_event":
                onMessageSent(intent.getStringExtra("google.message_id"));
                break;
            default:
                Log.w("FirebaseMessaging", "Received message with unknown type: ".concat(stringExtra));
                break;
        }
        if (this.rpc == null) {
        }
        rpc = this.rpc;
        if (rpc.f5645c.h() >= 233700000) {
        }
    }

    public void onDeletedMessages() {
    }

    public void onMessageReceived(@NonNull RemoteMessage remoteMessage) {
    }

    public void onMessageSent(@NonNull String str) {
    }

    public void onNewToken(String str) {
    }

    public void onSendError(@NonNull String str, @NonNull Exception exc) {
    }

    public void setRpcForTesting(Rpc rpc) {
        this.rpc = rpc;
    }
}
