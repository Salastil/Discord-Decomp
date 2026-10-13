package he;

import android.view.View;
import com.google.android.exoplayer2.Player;
import com.google.android.exoplayer2.ui.PlayerControlView;
import ke.d0;

/* loaded from: classes3.dex */
public final class g implements com.google.android.exoplayer2.h, q, View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ PlayerControlView f9975d;

    public g(PlayerControlView playerControlView) {
        this.f9975d = playerControlView;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        PlayerControlView playerControlView = this.f9975d;
        Player player = playerControlView.f5518g0;
        if (player == null) {
            return;
        }
        if (playerControlView.f5533v == view) {
            player.N();
            return;
        }
        if (playerControlView.f5519i == view) {
            player.q();
            return;
        }
        if (playerControlView.f5539y == view) {
            if (player.w() != 4) {
                player.O();
                return;
            }
            return;
        }
        if (playerControlView.E == view) {
            player.Q();
            return;
        }
        if (playerControlView.f5535w == view) {
            d0.C(player);
            return;
        }
        if (playerControlView.f5537x == view) {
            int i5 = d0.a;
            if (player.E(1)) {
                player.pause();
                return;
            }
            return;
        }
        if (playerControlView.F != view) {
            if (playerControlView.G == view) {
                player.h(!player.L());
                return;
            }
            return;
        }
        int I = player.I();
        int i6 = playerControlView.f5525n0;
        for (int i10 = 1; i10 <= 2; i10++) {
            int i11 = (I + i10) % 3;
            if (i11 != 0) {
                if (i11 != 1) {
                    if (i11 == 2 && (i6 & 2) != 0) {
                    }
                } else if ((i6 & 1) == 0) {
                }
            }
            I = i11;
        }
        player.F(I);
    }

    @Override // com.google.android.exoplayer2.h
    public final void onEvents(Player player, Player.Events events) {
        ke.g gVar = events.a;
        boolean a = events.a(4, 5);
        PlayerControlView playerControlView = this.f9975d;
        if (a) {
            int i5 = PlayerControlView.A0;
            playerControlView.h();
        }
        if (events.a(4, 5, 7)) {
            int i6 = PlayerControlView.A0;
            playerControlView.i();
        }
        if (gVar.a.get(8)) {
            int i10 = PlayerControlView.A0;
            playerControlView.j();
        }
        if (gVar.a.get(9)) {
            int i11 = PlayerControlView.A0;
            playerControlView.k();
        }
        if (events.a(8, 9, 11, 0, 13)) {
            int i12 = PlayerControlView.A0;
            playerControlView.g();
        }
        if (events.a(11, 0)) {
            int i13 = PlayerControlView.A0;
            playerControlView.l();
        }
    }
}
